// Makeset, Findset and Union set on ranked ll.
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
    int rank = 0;
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
    rank++;
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
        struct node *f = (t1->rank <= t2->rank) ? t2 : t1;
        struct node *r = (t1->rank <= t2->rank) ? t1 : t2;

        f->tail->next = r->head;
        while (r != NULL)
        {
            r->head = f;
            strhd[r->data] = r->head;
            f->tail = r;
            f->rank++;
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
