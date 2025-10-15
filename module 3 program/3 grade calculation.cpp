//Grade Calculator 
//o Write a C++ program that takes a student’s marks as input and calculates the grade 
//based on if-else conditions. 
//o Objective: Practice conditional statements (if-else).

#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter Number Of Subject Marks : ";
	cin>>size;
	int marks[size];
	int sum=0;
	double per;
	for(int i=0;i<size;i++)
	{
		cout<<"Subject "<<i+1<<" : ";
		cin>>marks[i];
		sum+=marks[i];
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<"Subject Marks "<<i+1<<" : "<<marks[i]<<endl;
	}
	cout<<"Sum : "<<sum<<endl;
	per=(sum*100)/500;
	if(per>=90)
	{
		cout<<"Grade : 'A+' " <<endl;
	}
	else if(per>80 && per<90){
		cout<<"Grade : 'A' " <<endl;
	}
	else if(per>75 && per<80){
		cout<<"Grade : 'B+' " <<endl;
	}
	else if(per>65 && per<75){
		cout<<"Grade : 'B' " <<endl;
	}
	else if(per>55 && per<65){
		cout<<"Grade : 'C+' " <<endl;
	}
	else if(per>50 && per<55){
		cout<<"Grade : 'C' " <<endl;
	}
	else if(per>40 && per<50){
		cout<<"Grade : 'D' " <<endl;
	}
	else{
		cout<<"Fail";
	}
	
	
	
}
