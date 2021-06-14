#include<iostream>
#include<string>
#define sum(a,b) (a+b)
#define sub(a,b) (a-b)
#define multi(a,b) (a*b)
#define devi(a,b) (a/b)
#define mod(a,b) (a%b)
using namespace std;
int main()
{
	
	int a,b;
	
cout<<"enter value of a :"<<endl;
cin>>a;

cout<<"enter value of b :"<<endl;
cin>>b;

cout<<"sum is : "<<sum(a,b)<<endl;
cout<<"sub is : "<<sub(a,b)<<endl;
cout<<"multiplication is : "<<multi(a,b)<<endl;
cout<<"division is : "<<devi(a,b)<<endl;
cout<<"modulous is : "<<mod(a,b)<<endl;
	return 0;
}

