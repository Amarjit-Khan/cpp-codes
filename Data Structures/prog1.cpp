//Linked List

#include<iostream>
#include<stdlib.h>
using namespace std;

class node{
	public:
		int data;
		node* next;
};

node* head=0, *newnode, *temp;
int nds = 0;

void insert_at_beg()
{
	newnode = new node();
	cout<<"Enter data to be inserted: ";
	cin>>newnode->data;
	if(head == 0)
	{
		newnode->next = NULL;
		head = newnode;
	}
	else{
		newnode->next = head;
		head = newnode;
	}
	nds++;
}

void insert_after_x()
{
	int x;
	newnode = new node();
	cout<<"Enter data to be inserted: ";
	cin>>newnode->data;
	newnode->next = NULL;
	cout<<"Enter the location: ";
	cin>>x;
	if(head == 0)
	{
		cout<<"No elements to insert after \n";
	}
	else{
		temp = head;
		for(int i=0;i<x-1;i++){
			temp=temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
}

void insert_at_end()
{
	newnode = new node();
	cout<<"Enter data to be inserted: ";
	cin>>newnode->data;
	newnode->next = NULL;
	if(head == 0)
	{
		cout<<"No elements to insert after \n";
	}
	else{
		temp=head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newnode;
	}
	nds++;
}

void delete_at_beg()
{
	temp = head;
	head=head->next;
	free(temp);
	cout<<"First node deleted successfully \n";
	nds--;
}

void delete_at_end()
{
	temp = head;
	for(int i=0;i<nds-2;i++){
		temp = temp->next;
	}
	temp->next = NULL;
	cout<<"Last node deleted successfully \n";
	nds--;
}

void display()
{
	if(head==0)
	{
		cout<<"No data to display \n";
	}
	else{
		temp = head;
		while(temp)
		{
			cout<<" "<<temp->data;
			temp = temp->next;
		}
		cout<<"\n";
	}
}

int main()
{
	int c=1;
	while(c<7){
		cout<<"Press 1 to insert data at beg, 2 to insert at end, 3 to insert at x, 4 to delete at beg, 5 to delete at end, 6 to display: ";
		cin>>c;
		switch(c)
		{
			case 1: insert_at_beg();
				break;
			case 2: insert_at_end();
				break;
			case 3: insert_after_x();
				break;
			case 4: delete_at_beg();
				break;
			case 5: delete_at_end();
				break;
			case 6: display();
				break;
			default:
				break;
		}
	}
}
