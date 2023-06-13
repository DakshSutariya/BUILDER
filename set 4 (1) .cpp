#include<iostream>
#include<string.h>

using namespace std;

class Employe{
	
	public :
	int id;
	char name[100];
	char role[100];
	int salary;
	char expirance[100];
	char address[100];
	char e_mail[100];
	int contact;
	
	void setdata()
	{
		cout<<"enter the id = ";
		cin>>id;
		cout<<"enter the name = ";
		cin>>name;
		cout<<"enter the role = ";
		cin>>role;
		cout<<"enter the salary = ";
		cin>>salary;
		cout<<"enter the expirance = ";
		cin>>expirance;
		cout<<"enter the address = ";
		cin>>address;
		cout<<"enter the e-mail = ";
		cin>>e_mail;
		cout<<"enter the contact = ";
		cin>>contact;
	}
	
	void getdata()
	{
		cout<<"id = "<<id<<endl
		<<"name = "<<name<<endl
		<<"role = "<<role<<endl
		<<"salary = "<<salary<<endl
		<<"expirance = "<<expirance<<endl
		<<"address = "<<address<<endl
		<<"e-mail = "<<e_mail<<endl
        <<"contact = "<<contact<<endl;		
	}
};
int main()
{
	Employe e1,e2,e3,e4,e5;
	
	e1.setdata();
	e2.setdata();
	e3.setdata();
	e4.setdata();
	e5.setdata();
	
	e1.getdata();
	e2.getdata();
	e3.getdata();
	e4.getdata();
	e5.getdata();
	
	return 0;
}
	
