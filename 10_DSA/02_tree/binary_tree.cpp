#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

//-------------- Pre order Build of tree
Node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }

    Node *n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();

    return n;
};

void printPreorder(Node *root)
{
    if (root == NULL)
        return;

    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
}

void printInOrder(Node *root) // 4 2 7 5 1 3 6
{
    if (root == NULL)
        return;

    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

void printPostOrder(Node *root) // 4 7 5 2 6 3 1
{
    if (root == NULL)
        return;

    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}
int main()
{ // 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1  6 -1 -1
    Node *root = buildTree();
    cout << "Preorder traversal of the constructed tree is: ";
    printPreorder(root); // 1 2 4 5 7 3 6

    cout << "\nInorder traversal of the constructed tree is: ";
    printInOrder(root); // 4 2 7 5 1 3 6
    cout << "\nPostorder traversal of the constructed tree is: ";
    printPostOrder(root); // 4 7 5 2 6 3 1
    return 0;
}