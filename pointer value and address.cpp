/*#include<iostream>
#include<string>
using namespace std;


int main()
{
	int a;
	
	cout<<("enter the value :");
	cin>>a;
	
	cout<<"value of a is :"<<a<<endl;
	cout<<"address of a is :"<<&a<<endl;
	
	return 0;
}













#include<iostream>
#include<string>
using namespace std;


int main()
{
	int a,*b;
	b=&a;
	
	cout<<("enter the value :");
	cin>>a;
	
	cout<<"value of a is :"<<a<<endl;
	cout<<"address of a is :"<<b<<endl;
	cout<<"value of a is :"<<*b<<endl;
	cout<<"address of a is :"<<&a<<endl;
	
	return 0;
}


*/



#include<iostream>
#include<string>
using namespace std;


int fun(int *x)
{
	cout<<"address is :"<<&x<<endl;
	
	cout<<"value is :"<<&x<<endl;
}
int main()
{
	
	int a;
	
	cout<<"enter the num :"<<endl;
	cin>>a;
	
	fun(&a);
	fun(a);
	
	return 0;
}
