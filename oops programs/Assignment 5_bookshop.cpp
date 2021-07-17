/*
 * book.cpp
 *
 *  Created on: Aug 9, 2016
 *      Author: student
 */

#include "iostream"
#include"string.h"
using namespace std;
class book
{
	char *title;
	char *author;
	char *pub;
	int stock;
	int price,n,t;
public:
	book()
{
		title=new char;
		author=new char;
		pub=new char;
		t=0;
}
	void getdata();
	void display(book a[],int);
	int search(book a[],int);
    void buy(book a[],int);
};

void book::display(book a[],int n)
{

	int i;
	cout<<"SR NO"<<"   "<<"TITLE"<<"   "<<"AUTHOR"<<"   "<<"PUBLISHER"<<"   "<<"PRICE"<<"   "<<"STOCK"<<"   "<<endl;
	for(i=0;i<n;i++)
	{
		if(a[i].stock!=0)
		cout<<(i+1)<<"       "<<a[i].title<<"        "<<a[i].author<<"       "<<a[i].pub<<"       "<<a[i].price<<"       "<<a[i].stock<<"    "<<endl;
	}
}

void book::getdata()
{
	cout<<"\nENTER :";
	cout<<"\nTITLE:";
     cin>>title;
	cout<<"\nAUTHOR:";
	cin>>author;
	cout<<"\nSTOCK:";
	cin>>stock;
	cout<<"\nPUBLICATION";
	cin>>pub;
	cout<<"\nPRICE:";
    cin>>price;
}

int book::search(book a[],int n)
{
	char b[20],c[20];
    int flag=0;
    int i;
    cout<<"Insert the name of the author you are looking for:"<<endl;
	cin>>b;
	cout<<"Insert the title of the book you are looking for:"<<endl;
    cin>>c;
	cout<<"Searching!!!!!"<<endl;
	for(i=0;i<n;i++)
	{
		if((strcmp(c,a[i].title)==0) &&(strcmp(b,a[i].author)==0))
		{
			flag=1;
			t=i;
			
			break;
		}
	}
	if(flag==1)
	{
		cout<<"We have what you are looking for "<<endl;
		buy(a,n);
	}
	else
	{
		cout<<"The book you are looking for is not present"<<endl;
	}
	cout<<t;
    return t;
    
    buy(a,n);
}
void book::buy(book a[],int n)
{
  int num,total;
  
  cout<<"Enter the number of the books you want to buy"<<endl;
  cin>>num;
  if(num<=a[t].stock)
  {
	  total=num*a[t].price;
	  cout<<"\nTotal amount you have to pay is:"<<total;
	  a[t].stock=a[t].stock-num;
  }
  else
  {
	  cout<<num<<" Books not available"<<endl;
  }
}

int main()
{
	cout<<"Welcome"<<endl;
	book a[50],b;
	int n,i;
	cout<<"Enter the no of books you want to enter"<<endl;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		a[i].getdata();
	}
	cout<<"\n*******************WELCOME TO BOOK SHOP****************\n";
	b.display(a,n);
	b.search(a,n);
	//b.buy(a,n);
	cout<<endl;
	b.display(a,n);
	return 0;
}








