// Makeset, Findset and Union set on unranked ll.
// Unranked linked list
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *head;
    node *tail;
} * strhd[10];

void makeset()
{
    int n;
    cout << "Enter data: ";
    cin >> n;
    node *newnode = new node();
    newnode->data = n;
    newnode->head = newnode;
    newnode->tail = newnode;
    newnode->next = NULL;
    strhd[n] = newnode->head;
}

struct node *findset(int n)
{
    return strhd[n];
}

void unionSet()
{
    int x, y;
    cin >> x >> y;
    struct node *t1 = findset(x);
    struct node *t2 = findset(y);
    if (t1 != t2)
    {
        struct node *temp = t1->tail;
        temp->next = t2->head;
        while (temp != NULL)
        {
            t2->head = temp;
            strhd[t2->data] = temp->head;
            temp->tail = t2;
            temp = temp->next;
        }
    }
}

void displaySet(int n)
{
    struct node *t = findset(n);
    printf("\n");
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
}

int main()
{
    makeset();
    makeset();
    makeset();
    makeset();
    displaySet(0);
    displaySet(1);
    displaySet(2);
    displaySet(3);
    unionSet();
    unionSet();
    unionSet();
    displaySet(0);
}
