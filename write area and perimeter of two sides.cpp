#include<iostream>
#include<string>
using namespace std;

class rectangular
{

	public :
		int s1,s2;
		
		void area()
		{
		cout<<"Area :"<<(s1*s2)<<endl;	
		}
	
		void perimeter()
		{
		cout<<"Perimeter :"<<2*(s1+s2)<<endl;	
		}
	
	rectangular(int S1 ,int S2)
	{
		s1=S1;
		s2=S2;
	}
};

int main()
{
	rectangular r1=rectangular(4,5);
	r1.area();
	r1.perimeter();
	cout<<"------------------------------------------------------------------------------"<<endl;
	rectangular r2=rectangular(5,8);
	r2.area();
	r2.perimeter();
	
	
	
	return 0;
}
