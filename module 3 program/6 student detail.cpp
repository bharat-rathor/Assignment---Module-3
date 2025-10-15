
//Write a program that implements inheritance using a base class Person and derived
//classes Student and Teacher. Demonstrate reusability through inheritance.
//o Objective: Learn the concept of inheritance

#include<iostream>
using namespace std;

class person{
	public:
		string name;
		int age;
		string course;
		string dept;
		string subject;
};

class student : public person{
	public:
		int roll_no;
		char ch;
		void adddetail()
		{
			do{
				cout<<"enter name : ";
				cin>>name;
				cout<<"Enter Roll No : ";
				cin>>roll_no;
				cout<<"enter age : ";
				cin>>age;
				cout<<"Enter Department : ";
				cin>>dept;
				cout<<"Enter Course : ";
				cin>>course;
				cout<<"Enter Subject : ";
				cin>>subject;
				
				cout<<"Do You Want To Continue : ";
				cin>>ch;
			}while(ch=='y' || ch=='Y');
		}
		void display()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Roll No : "<<roll_no<<endl;
			cout<<"Age : "<<age;
			cout<<"Department : "<<dept<<endl;
			cout<<"Course : "<<course<<endl;
			cout<<"Subject : "<<subject<<endl;
		}
};

class teacher : public person{
	public:
			int roll_no;
		char ch;
		void adddetail()
		{
			do{
				cout<<"enter name : ";
				cin>>name;
				cout<<"Enter Roll No : ";
				cin>>roll_no;
				cout<<"enter age : ";
				cin>>age;
				cout<<"Enter Department : ";
				cin>>dept;
				cout<<"Enter Course : ";
				cin>>course;
				cout<<"Enter Subject : ";
				cin>>subject;
				
				cout<<"Do You Want To Continue : ";
				cin>>ch;
			}while(ch=='y' || ch=='Y');
		}
		void display()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Roll No : "<<roll_no<<endl;
			cout<<"Age : "<<age;
			cout<<"Department : "<<dept<<endl;
			cout<<"Course : "<<course<<endl;
			cout<<"Subject : "<<subject<<endl;
		}
		
};
int main()
{
	student s1;
	teacher t1;
	int choice;
	while(1)
	{
		printf("1 student detail---\n");
		printf("2 faculty detail \n");
		
		cout<<"enter choice : ";
		cin>>choice;
		if(choice==1)
		{
			cout<<"1 Add Detail\n";
			cout<<"2 Display Reacord\n";
			cout<<"Enter Choice : ";
			cin>>choice;
			if(choice==1)
			{
				s1.adddetail();
			}
			else if(choice==2)
			{
				s1.display();
			}
			else{
				cout<<"Enter Valid Choice\n";
			}
		}
		else if(choice==2)
		{
			cout<<"1 Add Detail\n";
			cout<<"2 Display Reacord\n";
			cout<<"Enter Choice : ";
			cin>>choice;
			if(choice==1)
			{
				t1.adddetail();
			}
			else if(choice==2)
			{
				t1.display();
			}
			else{
				cout<<"Enter Valid Choice\n";
			}
		
		}
		else{
			cout<<"enter valid choice\n";
		}
	}
	return 0;
}
