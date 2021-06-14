#include<iostream>
#include<string>
using namespace std;

int max(int a,int b,int c)
{
	if(a>b && a>c)
	{
		cout<<a<<" is maximum"<<endl;
	}
	else if(b>a && b>c)
	{
		cout<<b<<" is maximum"<<endl;
	}
		else
	{
		cout<<c<<" is maximum"<<endl;
	}
}

int min(int a,int b,int c)
{
	if(a<b && a<c)
	{
		cout<<a<<" is minimum"<<endl;
	}
	else if(b<a && b<c)
	{
		cout<<b<<" is minimum"<<endl;
	}
		else
	{
		cout<<c<<" is minimum"<<endl;
	}
}

int main()
{
	
	int a,b,c;
	
	cout<<"num a : "<<endl;
	cin>>a;
		
	cout<<"num b : "<<endl;
	cin>>b;
		
	cout<<"num c : "<<endl;
	cin>>c;
	
	max(a,b,c);
	min(a,b,c);
	return 0;
}
