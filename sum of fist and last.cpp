/*#include<iostream>
#include<string>
using namespace std;


int main()
{
	int n,f,s,t,fourth,five;
	
	cout<<"please enter the 5 digit num:"<<endl;
	cin>>n;
	
	f=n/10000;
	n=n%10000;
	
	s=n/1000;
	n=n%1000;
	
	t=n/100;
	n=n%100;
	
	fourth=n/10;

	
	five=n%10;
	
	cout<<"sum of first and fivth :"<<f+five<<endl;
	
	
	return 0;
}




#include<iostream>
#include<string>
using namespace std;


int main()
{
	int n,f,s,t;
	
	cout<<"enter teh 3 digit num :"<<endl;
	cin>>n;
	
	f=n/100;
	n=n%100;
	s=n/10;
	t=n%10;
	
	cout<<"SUM IS : "<<(f+s+t)<<endl;
	return 0;
}


*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	
int num,f,s,t,fr,fv,sx,sv,e,n,tn,reverse;

cout<<"please enter ten digit num :"<<endl;
cin>>num;

f=num/1000000000;
num=num%1000000000;
	
s=num/100000000;
num=num%100000000;	

t=num/10000000;
num=num%10000000;

fr=num/1000000;
num=num%1000000;

fv=num/100000;
num=num%100000;

sx=num/10000;
num=num%10000;

sv=num/1000;
num=num%1000;

e=num/100;
num=num%100;

n=num/10;
tn=num%10;


reverse=tn*1000000000+n*100000000+e*10000000+sv*1000000+sx*100000+fv*10000+fr*1000+t*100+s*10+f;
cout<<"Reverse the num :"<<reverse<<endl;



cout<<"sum of first and  ten :"<<f+tn<<endl;
cout<<"sum of first and nine :"<<f+n<<endl;
cout<<"sum of first and eight :"<<f+e<<endl;
cout<<"sum of first and seven :"<<f+sv<<endl;
cout<<"sum of first and six :"<<f+sx<<endl;
cout<<"sum of first and five :"<<f+fv<<endl;
cout<<"sum of first and four :"<<f+fr<<endl;
cout<<"sum of first and three :"<<f+t<<endl;
cout<<"sum of first and two :"<<f+s<<endl;
cout<<"sum of first and first :"<<f+f<<endl;
cout<<"sum of three and six :"<<t+sx<<endl;
cout<<"sum of four and five :"<<f+fv<<endl;
	return 0;
}
