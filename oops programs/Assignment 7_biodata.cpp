#include"iostream"
#include"string.h"
using namespace std;
class personal
{
	string name;
	long int contact;
	string address;
public:
	void getper();
	void disper();
};

class academic
{
	float ssc;
	float hsc;
	float ug;
public:
	void getac();
	void disac();
};

class professional
{
	string company;
    string designation;
    int exp;
    string expert;
public:
    void getpro();
    void dispro();
};

void personal::getper()
{
	cout<<"Enter name "<<endl;
	getline(cin,name);
	cout<<"Enter address "<<endl;
	getline(cin,address);
	cout<<"Enter contact no. "<<endl;
	cin>>contact;
}
void personal::disper()
{
	cout<<"NAME:	"<<name<<endl;
	cout<<"CONTACT:	"<<contact<<endl;
	cout<<"ADDRESS:	"<<address<<endl;
}

void academic::getac()
{
	cout<<"Enter SSC,HSC & UG percentage"<<endl;
	cin>>ssc;
	cin>>hsc;
	cin>>ug;
}
void academic::disac()
{
	cout<<"SSC PERCENTAGE:	"<<ssc<<endl;
	cout<<"HSC PERCENTAGE:	"<<hsc<<endl;
	cout<<"UG PERCENTAGE:	"<<ug<<endl;
}

void professional::getpro()
{
	cout<<"Enter your company name"<<endl;
	cin.ignore();
	getline(cin,company);

	cout<<"Enter your designation"<<endl;
	getline(cin,designation);

	cout<<"Enter years of experience"<<endl;
	cin>>exp;

	cout<<"Enter area of expertisation"<<endl;
	cin.ignore();
	getline(cin,expert);
}
void professional::dispro()
{
	cout<<"COMPANY NAME:		"<<company<<endl;
	cout<<"DESIGNATION:		  "<<designation<<endl;
	cout<<"EXPERIENCE:		  "<<exp<<endl;
	cout<<"AREA OF EXPERTISATION:  "<<expert<<endl;
}

class biodata:public personal,public academic,public professional
{
public:
	void display();
};

void biodata::display()
{
	cout<<"********************************************"<<endl;
	cout<<"		BIODATA						"<<endl;
	cout<<"********************************************"<<endl;
	cout<<endl;
	cout<<"PERSONAL DETAILS	"<<endl;
	cout<<"--------------------------------------------"<<endl;
	disper();
	cout<<endl;
	cout<<"ACADEMIC DETAILS	"<<endl;
	cout<<"--------------------------------------------"<<endl;
	disac();
	cout<<endl;
	cout<<"PROFESSIONAL DETAILS	"<<endl;
	cout<<"--------------------------------------------"<<endl;
	dispro();
	cout<<endl;
}
int main()
{
	biodata b;
	b.getper();
	b.getac();
	b.getpro();
	b.display();

	return 1;
}
