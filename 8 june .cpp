#include<iostream>
#include<string.h>

using namespace std;

class Students
{
	private  :
		
	int std;
	int roll_no;
	char name[100];
	char s_name[100];
	char school_name[100];
	
	public :
		void setData()
		{
			cout<<"enter the std = "; cin>>std;
			cout<<"enter the roll nomber = "; cin>>roll_no;
			cout<<"enter the name = "; cin>>name;
			cout<<"enter the sur name = "; cin>>s_name;
			cout<<" enter the school name = "; cin >> school_name;
		}
		void getData()
		{
			cout<<"std = "<<std<<endl
			    <<"roll nomber = "<<roll_no<<endl
			    <<"name = "<<name<<endl
			    <<"sur name = "<<s_name<<endl
			    <<"school name = "<<school_name<<endl;
		}
};		
class Highschool
{
    private :
	
	int id;
	char name[100];
	char high_school_name[100]; 
		
		public :
			
		void setData()
		{
			cout<<"enter the id = "; cin>>id;
			cout<<"enter the name = "; cin>>name;
			cout<<" enter the high school name = "; cin >>high_school_name;
		}
		void getData()
		{
			cout<<"id = "<<id<<endl
			    <<"name = "<<name<<endl
			    <<"high school name = "<<high_school_name<<endl;
		}
};	
	char school_name[] = "B.I.S";
    char high_school_name[] = "D_T_";

int main()
{
	
	Students s1,s2,s3,s4,s5;
	Highschool h1,h2,h3,h4,h5;
	cout<<school_name<<endl;
	s1.setData();
	s2.setData();
	s3.setData();
	s4.setData();
	s5.setData();
	
	s1.getData();
	s2.getData();
	s3.getData();
	s4.getData();
	s5.getData();

	
	cout<<high_school_name<<endl;
	h1.setData();
	h2.setData();
	h3.setData();
	h4.setData();
	h5.setData();
	
	h1.getData();
	h2.getData();
	h3.getData();
	h4.getData();
	h5.getData();
	
	return 0;
}
