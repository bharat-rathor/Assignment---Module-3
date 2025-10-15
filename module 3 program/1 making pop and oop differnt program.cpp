#include<iostream>
#include<stdio.h>

using namespace std;


class triangle{
	public:
		int l,b;
		
		void triangle2()
		{
			cout<<"Enter Length : ";
			cin>>l;
			cout<<"Enter Width : ";
			cin>>b;
			cout<<"The Area Of Triangle : "<<l*b<<endl;
		}
};
void triangle1()
{
	int l,b;
	cout<<"Enter Length : ";
	cin>>l;
	cout<<"Enter Width : ";
	cin>>b;
	cout<<"The Area Of Triangle : "<<l*b<<endl;
	
}
int main()
{
	triangle t1;
	t1.triangle2();
	triangle1;
	return 0;
}
