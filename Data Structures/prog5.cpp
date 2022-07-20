// Linear search in a LL
// Recursive approach

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
} *head = 0;

void insert_at_beg(int x)
{
    node *newnode = new node();
    newnode->data = x;
    if (head == 0)
    {
        newnode->next = NULL;
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

bool lsearch(int x)
{
    if (head == NULL)
    {
        cout << "Underflow" << endl;
    }

    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == x)
        {
            return true;
        }

        temp = temp->next;
    }
}

int main()
{
    insert_at_beg(45);
    insert_at_beg(78);
    insert_at_beg(56);
    insert_at_beg(99);
    insert_at_beg(200);

    lsearch(100) ? cout << "YES! element found successfully." : cout << "NO, Element not found!";
}