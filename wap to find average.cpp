#include<iostream>
#include<string>
using namespace std;

class average
{

	public :
		int a,b,c;
		
		void avg()
		{
			cout<<"Average of "<<a<<","<<b<<","<<c<<" is : "<<(a+b+c)/3<<endl;
		}
	average(int A,int B,int C)
	{
		a=A;
		b=B;
		c=C;
	}
};

int main()
{
	average a1 =average(3,5,7);
	a1.avg();
	
	
	return 0;
}
