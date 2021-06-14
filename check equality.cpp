#include<iostream>
#include<string>
#define check(a,b) (a==b)
using namespace std;


int main()
{
	int a=1,b=6;
	int c=4,d=8;
	int e=1,f=6;

	cout<<"Average is :"<<check(a,b)<<endl;
	cout<<"Average is :"<<check(b,f)<<endl;
	cout<<"Average is :"<<check(a,e)<<endl;
	cout<<"Average is :"<<check(c,d)<<endl;
	
	return 0;
}
