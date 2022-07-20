// Merge 2 sorted linked list
// Iterative way

#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

void insert_at_end(node **root, int item)
{
    node *ptr, *temp;
    temp = new node;
    temp->data = item;
    temp->next = NULL;
    if (*root == NULL)
    {
        *root = temp;
    }
    else
    {
        ptr = *root;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void display(node *root)
{
    while (root != NULL)
    {
        cout << root->data << " -> ";
        root = root->next;
    }
    cout << "NULL" << endl;
}

node *merge(node *root1, node *root2)
{
    node *p1 = root1;
    node *p2 = root2;

    node *dummy = new node();
    node *p3 = dummy;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummy->next;
}

int main()
{
    node *root1 = NULL, *root2 = NULL, *root = NULL;
    insert_at_end(&root1, 1);
    insert_at_end(&root1, 4);
    insert_at_end(&root1, 5);
    insert_at_end(&root1, 7);

    insert_at_end(&root2, 2);
    insert_at_end(&root2, 3);
    insert_at_end(&root2, 6);

    display(root1);
    display(root2);

    display(merge(root1, root2));
}