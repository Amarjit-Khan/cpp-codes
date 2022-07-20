// Detectiona nd removal of cycle in LL
// Floyd's algo OR Hare and Tortoise algo
// fast and slow pointer :)

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
node *temp, *head = 0, *newnode;

bool detect_cycle()
{
    node *slowptr = head;
    node *fastptr = head;

    while (fastptr != NULL && fastptr->next != NULL)
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;

        if (fastptr == slowptr)
        {
            return true;
        }
    }

    return false;
}

void remove_cycle()
{
    node *slowptr = head;
    node *fastptr = head;

    do
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
    } while (slowptr != fastptr);

    fastptr = head;
    while (fastptr->next != slowptr->next)
    {
        fastptr = fastptr->next;
        slowptr = slowptr->next;
    }

    slowptr->next = NULL;
}