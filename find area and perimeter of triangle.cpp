#include<iostream>
#include<string>
using namespace std;

class triangle
{

 public :
 int a,b,c;
 void area ()
 {
 	cout<<"Area :"<<(a+b+c)/2<<endl;
	 }
	 
	  void perimeter()
 {
 	cout<<"Perimeter :"<<(a+b+c)<<endl;
	 }	
};

int main()
{
	triangle t1;
	t1.a=2;
	t1.b=4;
	t1.c=6;
	t1.area();
	t1.perimeter();
	
	
	return 0;
}
