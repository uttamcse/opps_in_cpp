#include<iostream>
#include<string>
using namespace std;

class btech 
{
	protected :
			int year=4;
	public :

	void aboutbtech()
	{
		cout<<"In Awadh University b.tech has 6 branch"<<endl;
		cout<<"Btech is "<<year<<" year old"<<endl;
	
		}	
};

class cse : public btech 
{
	protected :
			int student=72;
	public :
	
	void aboutcse()
	{
		cout<<"cse strenth is  : "<<student<<endl;
		}	
};

class it : public cse
{
	protected:
		int rollno=193;
public :
	
	void aboutit()
	{
		cout<<"it roll no start with : "<<rollno<<endl;
		}	
};

class ece : public btech , public cse , public it
{
public :
	int year=8;
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
	ece.ajay ::aboutbtech();
	return 0;
}

