// Binary tree - each node must have atmost 2 children

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

int main()
{
    node *root = 0;
    root = create();
}