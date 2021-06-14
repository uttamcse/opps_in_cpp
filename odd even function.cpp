#include<iostream>
#include<string>
using namespace std;


int check(int a)
{
	if(a%2==0)
	{
		cout<<a<<" is even"<<endl;
	}
		else
	{
		cout<<a<<" is odd"<<endl;
	}
}

int main()
{
	
	int a;
	
	cout<<"num a : "<<endl;
	cin>>a;
	 
	check(a);	
	return 0;
}
