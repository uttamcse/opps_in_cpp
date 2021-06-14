#include<iostream>
#include<string>
using namespace std;

class btech 
{
public :
	int year=4;
	void aboutbtech()
	{
		cout<<"In Awadh University b.tech has 6 branch"<<endl;
		cout<<"Btech is "<<year<<" year old"<<endl;
	
		}	
};

class cse : public btech 
{
public :
	int student=72;
	void aboutcse()
	{
		cout<<"cse strenth is  : "<<student<<endl;
		}	
};

class it : public cse
{
public :
	int rollno=193;
	void aboutit()
	{
		cout<<"it roll no start with : "<<rollno<<endl;
		}	
};

class ece : public it
{
public :
	int sem=8;
	void aboutece()
	{
		cout<<"ece has : "<<year<<" semester "<<endl;
		}	
};


int main(void)
{
	
	btech awadh;
	awadh.aboutbtech();
	cout<<"----------------------------------------------------------------------------"<<endl;
	cse uttam;
	uttam.aboutcse();
	uttam.aboutbtech();
	cout<<"----------------------------------------------------------------------------"<<endl;
	it saksham;
	saksham.aboutit();
	saksham.aboutbtech();
	saksham.aboutcse();
	cout<<"----------------------------------------------------------------------------"<<endl;
	ece ajay;
	ajay.aboutece();
	ajay.aboutbtech();
	ajay.aboutcse();
	ajay.aboutit();
	return 0;
}

