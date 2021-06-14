#include<iostream>
#include<string>
using namespace std;

class A
{
public:
	int a=6,b=4;
void sum()
{
	cout<<"Sum is :"<<a+b<<endl;
}
	
};
class B :public A
{
	public :
		int c=8,d=4;
	void multi()
	{
		cout<<"Multi is :"<<a*b<<endl;
	}
};

int main(void)
{
	
	A a1 =B();
	a1.sum();

	
	A a2 =B();
	a2.sum();

	
	return 0;
}
