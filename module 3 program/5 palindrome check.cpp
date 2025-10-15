//String Palindrome Check 
//o Write a C++ program to check if a given string is a palindrome (reads the same 
//forwards and backwards). 
//o Objective: Practice string operations. 


#include<iostream>
using namespace std;

int main()
{
	string name;
	cout<<"Enter String : ";
	cin>>name;
	int isplaindrome=0;
	char arr[100];
	int isindex=0;
	int len=name.length();
	for(int i=0;i<len;i++)
	{
		arr[isindex++]=name[i];
	}
	
	for(int i=0;i<len/2;i++)
	{
		
		if(arr[i]==arr[len-1-i])
		{
			isplaindrome=1;
		}
	}
	cout<<"The String Is : "<<name<<" = ";
	if(isplaindrome)
	{
		cout<<"palindrome";
	}
	else{
		cout<<"not plaindrome";
	}
	return 0;
}
