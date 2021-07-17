
#include "iostream"
#include "string.h"
using namespace std;
class stud2;
class stud1
{
 private:
	     int roll;
	     char *name;
	     char *address;
	     char *clas;
	     char division;
 public:
	     stud1()
         {
	      roll=0;
	      name=new char;
	      address=new char;
	      clas=new char;
	      division=' ';
         }
         friend class stud2;
	     inline void heading()
	     {
	      cout<<"\n \t \t \t \t STUDENT DATABASE ";
	      cout<<"\n \t \t \t \t ================ ";
	     }
	     void getdata1();
};
void stud1::getdata1()
{
 cout<<"\n Enter roll no.: ";
 cin>>roll;
 cout<<"\n Enter name: ";
 cin>>name;
 cout<<"\n Enter address: ";
 cin>>address;
 cout<<"\n Enter class: ";
 cin>>clas;
 cout<<"\n Enter division: ";
 cin>>division;
}
class stud2
{
 private:
	     long int dob;
	     long int license;
	     char *bloodgrp;
	     static int cnt;
 public:
	     void getdata2(stud1 &);
	     void dispdata2(stud1 &);
	     void delete_obj();
	     static void count();
	    // stud1 s1;
	     stud2()
	     {

	      dob=0;
	      license=0;
	      bloodgrp=new char;
	     }
	     stud2(int f,int g,char h[])
	     {
	      dob=f;
          license=g;
          strcpy(bloodgrp,h);
         }
         stud2(stud2 &s2)
         {

          dob=s2.dob;
          license=s2.license;
          strcpy(bloodgrp,s2.bloodgrp);
         }
};
int stud2::cnt;
void stud2::count()
{
 cnt++;
}
void stud2::getdata2(stud1 &s)
{
 s.heading();
 s.getdata1();
 cout<<"\n Enter date of birth: ";
 cin>>dob;
 cout<<"\n Enter license no.: ";
 cin>>license;
 cout<<"\n Enter blood group: ";
 cin>>bloodgrp;
 count();
}
void stud2::dispdata2(stud1 &s)
{
 s.heading();
 cout<<"\n Roll No.: "<<s.roll;
 cout<<"\n Name: "<<s.name;
 cout<<"\n Address: "<<s.address;
 cout<<"\n Class: "<<s.clas;
 cout<<"\n Division: "<<s.division;
// s.getdata1();
 cout<<"\n Date of Birth: "<<dob;
 cout<<"\n License no.: "<<license;
 cout<<"\n Blood Group: "<<bloodgrp;
 cout<<"\n Total no. of entries: "<<cnt;
}
void stud2::delete_obj()
{
 delete this;
}
int main(int argc, char **argv)
{
 stud1 st1;
 stud2 st2;
 stud2 st3(2295,1000,"B");
 st3.dispdata2(st1);
 stud2 st4(st3);
 st4.dispdata2(st1);
 st3.delete_obj();
 st2.getdata2(st1);
 st2.dispdata2(st1);
 return 1;
}
