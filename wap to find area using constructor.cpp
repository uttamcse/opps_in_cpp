#include<iostream>
#include<string>
using namespace std;

class Area
{

	public :
		int l,b;
		void returnArea1()
		{
			cout<<"Area 1 :"<<l*b<<endl;
		}
			void returnArea2()
		{
			cout<<"Area 2 :"<<l*b<<endl;
		}
			void returnArea3()
		{
			cout<<"Area 3 :"<<l*b<<endl;
		}
		Area(int L, int B)
		{
			l=L;
			b=B;
		}
	
};

int main()
{
	Area a1 =Area(2,4);
	Area a2 =Area(20,5);
	Area a3 =Area(7,4);
	a1.returnArea1();
	a2.returnArea2();
	a3.returnArea3();
	return 0;
}
