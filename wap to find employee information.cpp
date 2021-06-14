#include<iostream>
#include<string>
using namespace std;

 class employee
 {
 	
 public :
 		int year_of_joing;
 		string name;
 		string address;
 		
 	information()
 		{
 			
		 cout<<"Name : "<<name<<endl<<"Year of Joining : "<<year_of_joing<<endl<<"Address : "<<address<<endl;
		 cout<<"------------------------------------------------------------------------------"<<endl;
 	}
 			
employee(string Name ,int 	Year_of_joing,string Address)
		 {
		 	year_of_joing=	Year_of_joing;
		 	name=Name;
		 	address =Address;
			 }	
 			
		 
 };

int main()

{
		employee e1=employee("Robert",1994,"64C-WaiisStreat");
		e1.information();  
		
		employee e2=employee("Sam",2000,"68D-WaiisStreat");
		e2.information();
		
		employee e3=employee("John",1994,"26B-WaiisStreat");
		e3.information();
	return 0;
}

