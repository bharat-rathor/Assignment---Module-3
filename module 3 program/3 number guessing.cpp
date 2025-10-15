//Number Guessing Game 
//o Write a C++ program that asks the user to guess a number between 1 and 100. The 
//program should provide hints if the guess is too high or too low. Use loops to allow 
//the user multiple attempts. 



#include<iostream>
using namespace std;

int main()
{
	int num=50;
	
	int number;
	int attemp=0;
		
	
		do
		{
		
			int number;
			cout<<"Enter Number : ";
			cin>>number;
			if(number>num)
			{
				cout<<"Greater Number \n";
				
			}
			else if(number<num)
			{
				cout<<"Less NUmber\n";
					
			}
			else{
				cout<<"Congratulation \n";
				cout<<"Find Number This Attemp : "<<attemp;
					
			}
			attemp++;

	}while(number!=num);
	
}
