#include<iostream>
#include<string.h>
using namespace std;

class High_school{
	public :
		int id;
		int stu_roll_no;
		int stu_std;
		int stu_age;
		int stu_contact;
		char stu_name[100];
		static char stu_edu_institute_name[100];
		char stu_address[100];
		
		void setdata()
		{
				cout<<"enter id = ";
			cin>>id;
				cout<<"enter student roll nomber = ";
			cin>>stu_roll_no;
				cout<<"enter standard = ";
			cin>>stu_std;
				cout<<"enter Age = ";
			cin>>stu_age;
				cout<<"enter contact = ";
			cin>>stu_contact;
				cout<<"enter name = ";
			cin>>stu_name;
				cout<<"enter addres = ";
			cin>>stu_address;
		}
		
		void getdata()
		{
			cout<<"id"<<id<<endl;
			
			cout<<"roll nomber"<<stu_roll_no<<endl;
			
			cout<<"standard"<<stu_std<<endl;

			cout<<"Age"<<stu_age<<endl;

			cout<<"contact"<<stu_contact<<endl;

			cout<<"name"<<stu_name<<endl;

			cout<<"addres"<<stu_address<<endl;

		}
};

class clg{
	public :
		int id;
		int stu_roll_no;
		int stu_std;
		int stu_age;
		int stu_contact;
		char stu_name[100];
		static char stu_edu_institute_name[100];
		char stu_address[100];
		
		void setdata()
		{
				cout<<"enter id = ";
			cin>>id;
				cout<<"enter student roll nomber = ";
			cin>>stu_roll_no;
				cout<<"enter standard = ";
			cin>>stu_std;
				cout<<"enter Age = ";
			cin>>stu_age;
				cout<<"enter contact = ";
			cin>>stu_contact;
				cout<<"enter name = ";
			cin>>stu_name;
				cout<<"enter addres = ";
			cin>>stu_address;
		}
		
		void getdata()
		{
			cout<<"id"<<id<<endl;
			
			cout<<"roll nomber"<<stu_roll_no<<endl;
			
			cout<<"standard"<<stu_std<<endl;

			cout<<"Age"<<stu_age<<endl;

			cout<<"contact"<<stu_contact<<endl;

			cout<<"name"<<stu_name<<endl;

			cout<<"addres"<<stu_address<<endl;

		}
};


char High_school::stu_edu_institute_name[]="bhakti international school";
char clg::stu_edu_institute_name[]="SS gandhi";


int main()
{
	High_school h;
	clg c;
	h.setdata();
	h.getdata();
	cout<<"institute name ="<<High_school::stu_edu_institute_name<<endl;
	c.setdata();
	c.getdata();
	cout<<"institute name="<<clg::stu_edu_institute_name<<endl;
	
	return 0;
}
