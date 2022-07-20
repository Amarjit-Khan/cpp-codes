#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<fstream>
using namespace std;

class bank
{
	int accno;
	int bal;
	public:
		void acc_open();
		void acc_disp();
		void acc_deposit();
};

void bank::acc_open()
{
	cout<<"Enter details to create a new account"<<"\n";
	cout<<"Enter the account number : ";
	cin>>accno;
	cout<<endl;
	cout<<"Enter the balance : ";
	cin>>bal;
	cout<<endl;
}

void bank::acc_disp()
{
	cout<<"The account number"<<"\t";
	cout<<setw(10);
	cout<<"The account balance";
	cout<<endl;
	cout<<setw(10);
	cout<<accno;
	cout<<setw(30);
	cout<<bal;
	cout<<endl;
}

//void bank::acc_deposit()
//{
//	
//}

int main()
{
	bank ob;
	fstream file;
	file.open("Bank1", ios::in | ios::out | ios::binary);
	int ch;
	while(1)
	{
	
		cout<<"Press 1 for Creating Account ,2 for viewing the Account Details, 3 to deposit : ";
		cin>>ch;
		switch (ch)
		{
			case 1: //Create account
			ob.acc_open();
			file.write((char *) &ob,sizeof(ob));
			cout<<"\nWritten";
				break;
			case 2: //Display details
			file.close();
			file.open("Bank1", ios::in |  ios::binary);
			while(file.read((char *) & ob,sizeof(ob)))
				
			{
				//file.read((char *) & ob,sizeof(ob))
				ob.acc_disp();
				cout<<"inside";
			}
			cout<<"\noutside";
				break;
//			case 3: //deposit
//				
//				break;
			default:
				exit(0);
		}		
		
	}
}
