#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    string info;
    Node *leftchild;
    Node *rightchild;

    // Constructor for the node class
    Node(string i, Node *l, Node *r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree
{
public:
    Node *root;
    BinaryTree()
    {
        root = NULL;
    }

    void insert(string element)
    {
        Node *newNode = new Node(element, NULL, NULL);
        
        newNode->info = element;
        newNode->leftchild = NULL;
        newNode->rightchild = NULL;

        Node *parent = NULL;
        Node *currentnode = NULL;

        search(element, parent, currentnode);

        if (parent == NULL)
        {
            root = newNode;
            return;
        }

        if(element < parent->info)
        {
            parent->leftchild = newNode;
        }
        else if(element > parent->info)
        {
            parent->rightchild = newNode;
        }
    }
}