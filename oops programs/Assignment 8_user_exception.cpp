/*
 * userexe.cpp
 *
 *  Created on: Aug 29, 2016
 *      Author: student
 */
#include"iostream"
#include"string.h"
using namespace std;
class person
{
	int age,vehicle,cnt=0,i;
	double income;
	char city[5];
	char error[50];
	public:
		person()
		{
			age=0;
			income=0;
			vehicle=0;
			strcpy(city," ");
		}
		person(char a[])
		{
			strcpy(error,a);
		}
		void get();
		void disp();
};
void person::get()
{
	cout<<"\nEnter age: ";
	cin>>age;
	cout<<"\nEnter income: ";
	cin>>income;
	cout<<"\nEnter person holds which vehicle 4/2 wheeler: ";
	cin>>vehicle;
	cout<<"\nEnter city: ";
	cin>>city;
	try
	{
		if(age<18||age>55)
		   throw person("AGE IS NOT BETWEEN 18-55");
		if(income<50000||income>100000)
		   throw person("INCOME IS NOT BETWEEN 50000-100000");
		if((strcmp(city,"pune")==0)||(strcmp(city,"banglore")==0)||(strcmp(city,"chennai")==0)||(strcmp(city,"mumbai")==0))
		{
			cout<<" ";
		}
		else
		{
		   throw person("PERSON IS NOT STAYING IN PUNE/BANGLORE/CHENNAI/MUMBAI");
		}
		if(vehicle!=4)
		   throw person("PERSON SHOULD HOLD FOUR WHEELER");
	}
	catch(person p)
	{
		cout<<"\n"<<p.error;
		age=0;
		income=0;
		vehicle=0;
		strcpy(city,"NULL");
	}
}
void person::disp()
{
	cout<<"\nAGE\t\t\t\t\t"<<age<<"\nINCOME\t\t\t\t\t"<<income<<"\nCITY\t\t\t\t\t"<<city<<"\nVEHICLE\t\t\t\t\t"<<vehicle<<"\n";
 }

int main()
{
    int n;
    cout<<"\nEnter no. of records: ";
    cin>>n;
	person x,p[10];
	for(int i=0;i<n;i++)
	{
	  p[i].get();
	}
	cout<<"\n**********PERSON DETAILS*************\n";
	for(int i=0;i<n;i++)
	{
	   p[i].disp();
	}
	return 1;
}



