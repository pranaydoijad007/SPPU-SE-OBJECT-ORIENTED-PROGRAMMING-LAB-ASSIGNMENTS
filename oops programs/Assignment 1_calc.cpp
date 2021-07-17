 #include"iostream"
 #include"math.h"
 using  namespace std;
 class calci
 {
 int a,b;

 public:
 void get();
 void add();
 void subtract();
 void multiply();
 void divide();
 void mod();
 };

 void calci::get()
 {
 cout<<"Enter any two numbers"<<endl;
 cin>>a>>b;
 }
 void calci::add()
 {
 cout<<"Addition is:"<<(a+b)<<endl;
 }
 void calci::subtract()
 {
 cout<<"Subtraction is:"<<(a-b)<<endl;
 }
 void calci::multiply()
 {
 cout<<"Multiplication is:"<<(a*b)<<endl;
 }
 void calci::divide()
 {
 cout<<"Division is:"<<(a/b)<<endl;
 }
 void calci::mod()
 {
 cout<<"Modulus is:"<<(a%b)<<endl;
 }

 int main()
 {
 calci c;
 int a,b;
 int ch,ch2;
 char op,ch1;

 c.get();

 do
 {
 cout<<"Enter your choice"<<endl;
 cout<<"1.Simple calculator"<<endl;
 cout<<"2.Scientific calculator"<<endl;
 cin>>ch;
 switch(ch)
 {
 case 1:
 do
 {
 cout<<"Enter your choice"<<endl;
 cout<<"Press '+' for addition of two numbers"<<endl;
 cout<<"Press '-' for subtraction of two numbers"<<endl;
 cout<<"Press '*' for multiplication of two numbers"<<endl;
 cout<<"Press '/' for division of two numbers"<<endl;
 cout<<"Press '%' for modulus of two numbers"<<endl;
 cin>>ch1;
 switch(ch1)
 {
 case '+':c.add();
                break;
 case '-':c.subtract();
	break;
 case '*':c.multiply();
	break;
 case '/':c.divide();
	break;
 case '%':c.mod();
	break;
 default:cout<<"Invalid choice"<<endl;
	break;
 }
 cout<<"Do you want to continue simple calculator(y/n)"<<endl;
 cin>>op;
 }while(op=='y');

 break;

 case 2:
 do
 {
 float x,y;
 cout<<"Enter your choice"<<endl;
 cout<<"1.Sine of angle"<<endl;
 cout<<"2.Cosine of angle"<<endl;
 cout<<"3.Tangent of angle"<<endl;
 cout<<"4.Square root"<<endl;
 cout<<"5.Power function"<<endl;
 cin>>ch2;
 switch(ch2)
 {
 case 1:
	 cout<<"Enter two angles"<<endl;
	 cin>>a>>b;
 x=sin(a*3.14/180);
 y=sin(b*3.14/180);
 cout<<"Sine of angles "<<a<<" & "<<b<<" are "<<x<<" & "<<y<<endl;
 break;

 case 2:
	 cout<<"Enter two angles"<<endl;
	 	 cin>>a>>b;
 x=cos(a*3.14/180);
 y=cos(b*3.14/180);
 cout<<"Cosine of angles "<<a<<" & "<<b<<" are "<<x<<" & "<<y<<endl;
 break;

 case 3:
	 cout<<"Enter two angles"<<endl;
	 	 cin>>a>>b;
 x=tan(a*3.14/180);
 y=tan(b*3.14/180);
 cout<<"Tangent of angles "<<a<<" & "<<b<<" are "<<x<<" & "<<y<<endl;
 break;

 case 4:
	 cout<<"Enter two numbers"<<endl;
	 	 cin>>a>>b;
 x=sqrt(a);
 y=sqrt(b);
 cout<<"Square roots of "<<a<<" & "<<b<<" are "<<x<<" & "<<y<<endl;
 break;

 case 5:
	 cout<<"Enter two numbers"<<endl;
	 	 cin>>a>>b;
 x=pow(a,b);
 cout<<a<<"^"<<b<<"="<<x<<endl;
 break;

 default:cout<<"Invalid choice"<<endl;
	break;
 }
 cout<<"Do you want to continue scientific calculator(y/n)"<<endl;
 cin>>op;
 }while(op=='y');

 break;

 default:cout<<"Invalid choice"<<endl;
	break;
 }
 cout<<"Do you want to continue(y/n)"<<endl;
 cin>>op;
 }while(op=='y');

 return 1;
 }

