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
        Node *newNode = new node(element, NULL, NULL);
        
        newNode->info = element;
        newNode->leftchild = NULL;
        newNode->rightchild = NULL;

        Node *parent = NULL;
        Node *currentnode = NULL;
    }
}