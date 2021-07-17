#include"iostream"
#include"iomanip"
#include"string.h"
using namespace std;
class publication
{
	protected:
		char title[20];
		float price;

};
class book:public publication
{
	int pgcnt;
	public:
		void getbook();
		void dispbook();
		book()
		{
			strcpy(title," ");
			price=0.0;
			pgcnt=0;
		}
};
class tape:public publication
{
	float time;
	public:
		void gettape();
		void disptape();
		tape()
		{
		strcpy(title," ");
			price=0.0;
			time=0.0;
		}
};
void book::getbook()
{
	cout<<"Enter title of book: "<<endl;
	cin>>title;
	cout<<"Enter price of book: "<<endl;
	cin>>price;
	cout<<"Enter page count of book: "<<endl;
	cin>>pgcnt;
	try
	{
		if(!isalpha(title[0]))
		throw 1;
		if(price<=0)
		throw 2;
		if(pgcnt<=0)
		throw 3;
	}
	catch(int i)
	{
		if(i==1)
		{
		 cout<<"Invalid title entered"<<endl;
		 strcpy(title,"NULL");
		 price=0.0;
		 pgcnt=0;
		}
		if(i==2)
		{
		 cout<<"Invalid price entered"<<endl;
		 strcpy(title,"NULL");
		 price=0.0;
		 pgcnt=0;
		}
		if(i==3)
		{
		 cout<<"Invalid page count entered"<<endl;
		 strcpy(title,"NULL");
		 price=0.0;
		 pgcnt=0;
		}
	}
}
void book::dispbook()
{


	cout<<setw(10)<<title<<setw(10)<<price<<setw(20)<<pgcnt<<endl;

}
void tape::gettape()
{
	cout<<"Enter title of tape: "<<endl;
	cin>>title;
	cout<<"Enter price of tape: "<<endl;
	cin>>price;
	cout<<"Enter playing time of tape: "<<endl;
	cin>>time;
	try
	{
		if(!isalpha(title[0]))
		throw 1;
		if(price<=0)
		throw 2;
		if(time<=0)
		throw 3;
	}
	catch(int i)
	{
		if(i==1)
		{
		 cout<<"Invalid title entered"<<endl;
		 strcpy(title,"NULL");
		 price=0.0;
		 time=0.0;
		}
		if(i==2)
		{
		 cout<<"Invalid price entered"<<endl;
		 strcpy(title,"NULL");
		 price=0.0;
		 time=0.0;
		}
		if(i==3)
		{
		 cout<<"Invalid playing time entered"<<endl;
		 strcpy(title,"NULL");
		 price=0.0;
		 time=0.0;
		}
	}
}
void tape::disptape()
{

	cout<<setw(10)<<title<<setw(10)<<price<<setw(20)<<time<<endl;

}
int main()
{
	char ch='y';
	int n,m,op;
	book b[10];
	tape t[10];
	do
	{
		cout<<"1.ENTER DATA OF BOOKS"<<endl;
    	cout<<"2.ENTER DATA OF TAPES"<<endl<<endl;
	    cout<<"Enter your choice....."<<endl;
	    cin>>op;
		switch(op)
		{
			case 1:cout<<"Data of how many books you want to enter?"<<endl;
	               cin>>n;
	               for(int j=0;j<n;j++)
                 	{
	                	b[j].getbook();
	                }

                  cout<<"-------------------------------------------------------------"<<endl;
                  cout<<setw(10)<<"TITLE"<<setw(10)<<"PRICE"<<setw(20)<<"PAGE COUNT"<<endl;
                  cout<<"-------------------------------------------------------------"<<endl;
               	   for(int j=0;j<n;j++)
	               {
		            b[j].dispbook();
	               }
	               break;
	        case 2:cout<<"Data of how many tapes you want to enter?"<<endl;
	               cin>>m;
	               for(int k=0;k<m;k++)
	               {
		            t[k].gettape();
	               }
				   cout<<"-------------------------------------------------------------"<<endl;
                    cout<<setw(10)<<"TITLE"<<setw(10)<<"PRICE"<<setw(20)<<"PLAYING TIME"<<endl;
	                cout<<"-------------------------------------------------------------"<<endl;
	               for(int k=0;k<m;k++)
                	{
	                 t[k].disptape();
	                }

	                break;
	        default:cout<<"Invalid choice entered........."<<endl;
	   }
		cout<<"Do you want to continue?(y/n)"<<endl;
		cin>>ch;
	}while(ch=='y');
    return 1;
}
