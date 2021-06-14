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
	
	B b1 =B();
	b1.sum();
	b1.multi();
	
	B b2 =B();
	b2.sum();
	b2.multi();
	
	return 0;
}
