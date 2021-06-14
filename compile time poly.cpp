/*#include<iostream>
#include<string>
using namespace std;

class A
{
	public:
		static int add(int a ,int b)
		{
			return a+b;
		}
		
		static int add(int a ,int b,int c)
		{
			return a+b+c;
		}
};
int main()
{
	A a1;
	cout<<a1.add(10,20)<<endl;
	cout<<a1.add(10,20,30)<<endl;
	
	return 0;
}



*/
#include<iostream>
#include<string>
using namespace std;

int sub(int ,int);
float multi(int ,float);

int sum (int a,int b)
{
	return a+b;
}

float multi(int x,float y)
{
	return x*y;
}
int main()
{
	int A=multi(2,3);
	float B=sum(5.6,4.4);
	
	cout<<"A is "<<A<<endl;
	cout<<"B is "<<B<<endl;
	
	return 0;
}
