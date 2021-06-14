#include<iostream>
#include<string>
using namespace std;


int multi(int a,int b)
{
	return a*b;
}
int main()
{
	int a,  b;
	
	cout<<"enter the value of a :"<<endl;
	cin>>a;
	
		
	cout<<"enter the value of b :"<<endl;
	cin>>b;
	
	cout<<"multiplication is :";
	cout<<multi(a,b)<<endl;
	
	return 0;
}

