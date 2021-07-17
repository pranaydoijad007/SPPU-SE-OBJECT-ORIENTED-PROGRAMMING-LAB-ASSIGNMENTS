/*
 * arr.cpp
 *
 *  Created on: Jul 25, 2016
 *      Author: student
 */

/*
 * array.cpp
 *
 *  Created on: Jul 19, 2016
 *      Author: student
 */
#include"iostream"
using namespace std;
class A
{
	int a[10],min,max,no,flag=0;
public:
	int n;
	void get();
	void disp();
	void range();
	void insert();
	int size();
	void operator=(A);
};
void A::get()
{
	cout<<"\nEnter total number of elements: ";
	cin>>n;
	cout<<"\nEnter array elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void A::disp()
{
	cout<<"\nArray is:";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void A::range()
{
	max=a[0];
	for(int i=0;i<n;i++)
	{
	 if(a[i]>max)
	 {
		 max=a[i];
	 }
	}
	min=a[0];
	for(int i=0;i<n;i++)
		{
		 if(a[i]<min)
		 {
			 min=a[i];
		 }
		}
	cout<<"\nRange is ["<<min<<","<<max<<"]";
}
void A::insert()
{
	int i;
	cout<<"\n\nEnter element you want to insert: ";
	cin>>no;
	if(no>min && no<max)
	{

		a[n] = no;
		n=n+1;
		flag=1;
	}



	else
	{
		cout<<"\n Out of range";
		flag=0;
	}

}
int A::size()
{
	if(flag==0)
	{
	int val=(n*sizeof(int));
	cout<<"\nSize of array before insertion: "<<val;
	return val;
	}
	else
	{
		int val=((n+1)*sizeof(int));
		cout<<"\nSize of array after insertion: "<<val;
		return val;
	}
}
void A::operator=(A a1)
{
	cout<<"\n Copied array:";
	
	for(int i=0;i<n;i++)
	{
		a[i]=a1.a[i];
	}
/*	for(int i=0;i<a1.n;i++)
		cout<<a[i]<<" ";*/
	this->disp();
	cout<<"\nArray elelemnts: "<<a1.n<<endl<<endl;

}
int main()
{
	A a1,a2;
	a1.get();
	a1.disp();
	a1.range();
	a1.insert();
	a1.size( );
	a2=a1;
	//a1.disp();
	//a2.disp();
	return 1;
}




