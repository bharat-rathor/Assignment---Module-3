#include<iostream>
using namespace std;
class calculator{
	
	public:
		int a,b;
		
		int add()
		{
			cout<<"Enter Number 1 : ";
			cin>>a;
			cout<<"Enter Number 2 : ";
			cin>>b;
			return a+b;
		}
		
		int sub()
		{
			cout<<"Enter Number 1 : ";
			cin>>a;
			cout<<"Enter Number 2 : ";
			cin>>b;
			return a-b;
		}
		int mul()
		{
			cout<<"Enter Number 1 : ";
			cin>>a;
			cout<<"Enter Number 2 : ";
			cin>>b;
			return a*b;
		}
		int div()
		{
			cout<<"Enter Number 1 : ";
			cin>>a;
			cout<<"Enter Number 2 : ";
			cin>>b;
			if(a>=0 && b>=0)
			{
			
				return a/b;
			}
			else{
				cout<<"Enter Valid Number "<<endl;
			}
		}
};
int main()
{
	calculator c1;
	
	int choice;
	while(1)
	{
		cout<<"\n-----Calculator------\n";
		cout<<"1 Addition \n";
		cout<<"2 Subtraction\n";
		cout<<"3 Multiplication\n";
		cout<<"4 Divison\n";
		cout<<"Enter Choice : ";
		cout<<"\n";
		cin>>choice;
		if(choice==1)
		{
			cout<<"Sum : "<<c1.add()<<endl;
		}
		else if(choice==2)
		{
			cout<<"Sub : "<<c1.sub()<<endl;
		}
		else if(choice==3)
		{
			cout<<"Sub : "<<c1.mul()<<endl;
		}
		else if(choice==4)
		{
			cout<<"Sub : "<<c1.div()<<endl;
		}
		else{
			cout<<"Enter Valid Choice";
		}
	}
	return 0;
}
