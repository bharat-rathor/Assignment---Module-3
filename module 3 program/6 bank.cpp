#include<iostream>
#include<string.h>
using namespace std;

class bank{
	private:
		int pin;
	public:
		string name;
		int account_number;
		double balance;
		int userpin;
		double deposite1;
		double copy_balance;
		double withdraw_amount;
		char ch;
		void getpin(int pin)
		{
			this->pin=pin;
		}
		void add()
		{
			cout<<"Enter Account Number : ";
			cin>>account_number;
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Balance : ";
			cin>>balance;
			copy_balance=balance;
		}
		void deposite()
		{
			do{
				cout<<"Enter Pin : ";
				cin>>userpin;
				if(pin==userpin)
				{
					cout<<"Enter Deposite Amount : ";
					cin>>deposite1;
					cout<<"Deposite ";
					cout<<"Account Number : "<<account_number<<endl;
					cout<<"Name : "<<name;
					cout<<"Before Deposite Balance : "<<copy_balance<<endl;
					balance+=deposite1;
					cout<<"After Deposite Balance  : "<<balance<<endl;
					cout<<"Success"<<endl;
					copy_balance=balance;
				}
				cout<<"Do You Want To Continue : ";
				cin>>ch;
			}while(ch=='y' || ch=='Y');
			
			
		}
		
		void withdraw()
		{
			do{
			cout<<"Enter Pin : ";
			cin>>userpin;
			if(pin==userpin)
			{
				cout<<"Enter Withdraw Amount : ";
				cin>>withdraw_amount;
				if(withdraw_amount>balance)
				{
					cout<<"Enter Valid Amount \n";
				}
				else{
					cout<<"Name : "<<name<<endl;
					cout<<"Account : "<<account_number<<endl;
					cout<<"Balance : "<<copy_balance<<endl;
					balance-=withdraw_amount;
					cout<<"After With draw amount : "<<balance<<endl;
					cout<<"Sucess \n";
				}
			}
			cout<<"Do You Want To Continue : ";
			cin>>ch;
		}while(ch=='y' || ch=='Y');
		}
};
int main()
{
	bank b;
	int choice;
	int pin;
	while(1)
	{
		cout<<"\n----bank account----\n";
		cout<<"1 Add Detail\n";
		cout<<"2 Deposite \n";
		cout<<"3 Withdraw \n";
		cout<<"Enter Choice : ";
		cin>>choice;
		if(choice==1)
		{
			cout<<"Enter Pin : ";
			cin>>pin;
			b.getpin(pin);
			b.add();
		}
		else if(choice==2)
		{
			b.deposite();
		}
		else if(choice==3)
		{
			b.withdraw();
		}
		else{
			cout<<"Enter Valid Choice\n";
		}
	};
	return 0;
}
