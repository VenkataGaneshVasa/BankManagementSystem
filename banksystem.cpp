#include<stdio.h>
//#include<conio.h>
#include<iostream>
using namespace std;

class bank
{ 
	char name[100];
	char add[100], y;
	int balance;
	public:
		void open_account();
		void deposit_money();
		void withdraw_money();
		void display_account();
}; 

void bank :: open_account()
{
	cout<<"\n Enter your full name :: ";
	cin.ignore();
	cin.getline(name,100);
	cout<<"\n Enter your address :: ";
	//cin.ignore();
	cin.getline(add,100);
	cout<<"\n What type of account you want to open savings account (S) or current account (C) \n ";
	cin>>y;
	if(y=='s' || y=='S' || y=='c' || y=='C'){
	
	cout<<"\n Enter amount for deposit :: ";
	cin>>balance;
	cout<<"\n Your account has been created... \n";
     }  
     else
	{
     	cout<<"Invalid account type selected...";
	}
}

void bank ::deposit_money()
{
	int a;
	cout<<"\nEnter how much you want to deposit :: ";
	cin>>a;
	balance+=a;
	cout<<"\n Total amount after deposit :: \t"<<balance;
}

void bank:: display_account()
{
	cout<<"\n Full name :: \t"<<name;
	cout<<"\n Address :: \t"<<add;
	cout<<"\n Accont type :: \t"<<y;
	cout<<"\n Account balance :: \t"<<balance;
}

void bank :: withdraw_money()
{
	float amount;
	cout<<"\n Withdraw :: ";
	cout<<"\n Enter amount to withdraw :: ";
	cin>>amount;
	balance-=amount;
	cout<<"\n Now total amount left is :: "<<balance;
}

int main()
{
	int ch;
	char x;
	bank obj;
	do
	{
	cout<<"     \n";
	cout<<"     \n";
	cout<<"            Menu \n";
	cout<<"         1) Open Account \n";
	cout<<"         2) Deposit Money \n";
	cout<<"         3) Withdraw Money \n";
	cout<<"         4) Display Account \n";
	cout<<"         5) Exit \n";
	cout<<"\n";
	cout<<"      Select the option from above(1-5) : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
		    cout<<"1) Open account \n";
		    obj.open_account();
		    break;
		case 2:
		    cout<<"2) Deposit money \n";
		    obj.deposit_money();
		    break;
		case 3:
		    cout<<"3) Withdraw money \n";
		    obj.withdraw_money();
		    break;
		case 4:
		    cout<<"4) Display money \n";
		    obj.display_account();
		    break;
		case 5:
			if(ch==5)
			{
			   exit(1);	
			}
		default:
			cout<<"This is not exist, try again \n ";
     }     
	
	cout<<"\n Do you want to select next option then press :: Y \n";
	cout<<"If you want to exit then press :: N \n";
    cin>>x;
	if(x=='n'||x=='N')
	{
		exit(0);
	}
	}while(x=='y'||x=='Y');
	
     
	
	
	return 0;
} 