// Double linked list
// More memory space needed

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
} *head = 0;

void insert_at_beg()
{
    node *newnode = new node();
    int x;
    cin >> x;
    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
    }
}

void delete_at_beg()
{
    if (head == NULL)
    {
        cout << "No item to delete" << endl;
    }
    else
    {
        node *temp = head;
        head = head->next;
        free(temp);
    }
}

void display()
{
    if (head == NULL)
    {
        cout << "Underflow" << endl;
    }

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int c = 1;
    while (c < 4)
    {
        cout << "Press 1 to insert data at beg, 2 to delete at beg, 3 to display: ";
        cin >> c;
        switch (c)
        {
        case 1:
            insert_at_beg();
            break;
        case 2:
            delete_at_beg();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }
}