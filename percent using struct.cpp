#include<iostream>
#include<string>
using namespace std;

struct student {
	
	string name;
	int roll;

	float pm;
	float cm;
	float mm;
};


int main()
{
	

struct student s1;
s1.name="Uttam";
s1.roll=19162;
s1.mm=66;
s1.cm=76;
s1.pm=73;
cout<<s1.name<<" average is :"<<(s1.mm +s1.pm + s1.cm)/3<<endl;

struct student s2;
s2.name="Utsav";
s2.roll=19161;
s2.mm=69;
s2.cm=72;
s2.pm=70;
cout<<s2.name<<" average is :"<<(s2.mm +s2.pm + s2.cm)/3<<endl;


struct student s3;
s3.name="Umang";
s3.roll=19160;
s3.mm=61;
s3.cm=77;
s3.pm=70;
cout<<s3.name<<" average is :"<<(s3.mm +s3.pm + s3.cm)/3<<endl;


	
	return 0;
}
