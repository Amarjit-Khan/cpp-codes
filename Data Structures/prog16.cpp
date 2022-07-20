// Binary Tree Traversal

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

node *temp;

node *create()
{
    int x;
    node *newnode = new node();
    cout << "Enter data to store (-1 for no node): ";
    cin >> x;
    if (x == -1)
    {
        return 0;
    }
    newnode->data = x;
    cout << "Left child of " << x << " ";
    newnode->left = create();
    cout << "Right child of " << x << " ";
    newnode->right = create();
    return newnode;
}

void preorder(node *temp2)
{
    if (temp2 == 0)
    {
        return;
    }
    cout << temp2->data << " ";
    preorder(temp2->left);
    preorder(temp2->right);
}

void inorder(node *temp2)
{
    if (temp2 == 0)
    {
        return;
    }
    inorder(temp2->left);
    cout << temp2->data << " ";
    inorder(temp2->right);
}

void postorder(node *temp2)
{
    if (temp2 == 0)
    {
        return;
    }
    postorder(temp2->left);
    postorder(temp2->right);
    cout << temp2->data << " ";
}

int main()
{
    node *root = 0;
    root = create();
    cout << endl;
    cout << "Preorder traversal of the tree is: ";
    preorder(root);
    cout << endl;
    cout << "Inorder traversal of the tree is: ";
    inorder(root);
    cout << endl;
    cout << "Postorder traversal of the tree is: ";
    postorder(root);
}