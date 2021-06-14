/*#include<iostream>
#include<string>
using namespace std;

class btech
{
	public :
		int year=4;
};
class cse : public btech
{
	public :
		int student=72;
};

int main(void)
{
btech s1;
cout<<"Year :"<<s1.year<<endl;	

cse s2;
cout<<"Year :"<<s2.year<<endl<<"Student :"<<s2.student<<endl;	


	
	return 0;
}








#include<iostream>
#include<string>
using namespace std;


class animal
{
	public:
		void animals()
		{
			cout<<"Welcome to Animal Planet"<<endl;
		}
		
};
class dog : public animal
{
	public :
		void voice()
		{
			
			cout<<"Dog Voice is Bow.... Bow...."<<endl;
		}
};
int main(void)
{
	
	dog tomi;
	tomi.animals();
	tomi.voice();
	cout<<"------------------------------------------------------------------------------"<<endl;	
	
		
	dog rani;
	rani.animals();
	rani.voice();
	cout<<"------------------------------------------------------------------------------"<<endl;	
	
	return 0;
}


*/





#include<iostream>
#include<string>
using namespace std;


class A
{
	public :
	int a=12;
	int b=4;
	void sum()
	{
		cout<<"Parents Class A is called"<<endl;
		cout<<"Sum is "<<a+b<<endl;
		}	
};

class B : public A
{
	public :
	int c=2;
	int d=4;
	void sub()
	{
		cout<<"Parent Class A is called from his child class B"<<endl;
		cout<<"Subtraction is : "<<a-b<<endl;
		}	
};

int main(void)
{
	B b1;
	b1.sub();
	b1.sum();
	cout<<"------------------------------------------------------------------------------"<<endl;
	return 0;
}

