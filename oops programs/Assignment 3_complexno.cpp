/*
 * com.cpp
 *
 *  Created on: 06-Aug-2016
 *      Author: Prasana
 */
/*
 * complex.cpp
 *
 *  Created on: Aug 1, 2016
 *      Author: student
 */
#include"iostream"
using namespace std;
class complex
{
   float r,i;
   public:

     void operator +(complex);
     void operator -(complex);
     void operator *(complex);
     void operator /(complex);
     friend void operator>>(istream &,complex &);
     friend void operator<<(ostream &,complex &);
};
void operator>>(istream &in,complex &c)
{
	cout<<"\nEnter the real and imaginary part of complex number";
    in>>c.r>>c.i;
}

void operator<<(ostream &out,complex &c)
{
	out<<"\n"<<c.r<<"+"<<c.i<<"i";
}
void complex::operator +(complex c2)
{
	complex c3;
	c3.r=r+c2.r;
	c3.i=i+c2.i;
	cout<<"\nAddition is: ";
	cout<<c3;
}
void complex::operator -(complex c2)
{
	complex c4;
	c4.r=r-c2.r;
	c4.i=i-c2.i;
	cout<<"\nAddition is: ";
	cout<<c4;
}

void  complex::operator *(complex c2)
{
	complex c5;
	c5.r=((r*c2.r)-(i*c2.i));
	c5.i=((r*c2.i)+(i*c2.r));
	cout<<"\nMultiplication is: ";
	cout<<c5;
}
void complex::operator /(complex c2)
{
	complex c6;
	c6.r=(((r*c2.r)+(i*c2.i))/((c2.r*c2.r)+(c2.i*c2.i)));
	c6.i=(((i*c2.r)-(r*c2.i))/((c2.r*c2.r)+(c2.i*c2.i)));
	cout<<"\nDivision is: ";
	cout<<c6;
}
int main()
{
	complex c1,c2;
	cout<<"\nEnter first complex no.: ";
	cin>>c1;
	cout<<"\nEnter second complex no.: ";
	cin>>c2;
	cout<<"\n\nFirst complex no. is ";
	cout<<c1;
	cout<<"\n\nFirst complex no. is ";
	cout<<c2;
	c1+c2;
	c1-c2;
	c1*c2;
	c1/c2;
	return 1;
}








