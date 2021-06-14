#include<iostream>
#include<string>
using namespace std;

class triangle
{

public :
	int a,b,c;
	
	void area()
	{
		cout<<"Area :"<<(a*b/c)<<endl;
	}
		void perimeter()
	{
		cout<<"Perimeter :"<<(a+b+c)<<endl;
	}
	triangle(int A,int B, int C)
	{
		a=A;
		b=B;
		c=C;
	}
		
};
int main()
{
	triangle t1=triangle(22,33,44);
	t1.area();
	t1.perimeter();
	
	return 0;
}
