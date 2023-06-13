#include<iostream>
#include<string.h>
using namespace std;

class Hotel{
	public :
	int id;
	char name[100];
	char type[100];
	int staff_size;
	int room_size;
	int establish_year;
	char address[100];
	char rating_type[100];
	char website[100];
	
	void setdata(int id,char name[],char type[],int staff_size,int room_size,int establish_year,char address[],char rating_type[],char website[])
	{
		this->id = id;
		strcpy(this->name,name);
		strcpy(this->type,type);
		this->staff_size;
		this->room_size;
		this->establish_year=establish_year;
		strcpy(this->address,address);
		strcpy(this->rating_type,rating_type);
		strcpy(this->website,website);
	}
	
	void getdata()
	{
		cout<<"id = "<<id<<endl
		<<"name = "<<name<<endl
		<<"type = "<<type<<endl
		<<"staff_size = "<<staff_size<<endl
		<<"room_size = "<<room_size<<endl
		<<"establish_year = "<<establish_year<<endl
		<<"address = "<<address<<endl
        <<"rating_type = "<<rating_type<<endl
		<<"website = "<<website<<endl;
	}
};
int main()
{
	Hotel h1;
	
	h1.setdata(1042,"D_T_ the hotal","veg",500,1000,1750,"D_T_1042","10 star","www.D_T_.com");
	
	h1.getdata();
	return 0;
	
}
// id, name, type, staff_size, room_size, establish_year, address, rating_type and website. 
