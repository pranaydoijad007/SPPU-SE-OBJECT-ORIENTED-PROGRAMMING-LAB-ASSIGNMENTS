#include"iostream"
using namespace std;
template<class T>
void sort(T a[],int n)
{
	int i,j; T temp;
	int minloc;
	for(i=0;i<n;i++)
	{
		minloc=i;
	  for(j=i+1;j<n;j++)
	  {
	  	 if(a[j]<a[minloc])
	  	 {
	  	 	minloc=j;
		 }
		 if(minloc!=i)
		 {
		 	temp=a[i];
		 	a[i]=a[minloc];
		 	a[minloc]=temp;
		 }
	  }	
	}
	cout<<"\nSorted elements are: \n";
	for(i=0;i<n;i++)
	{
		cout<<"\t"<<a[i];
	}
}

int main()
{
	int n,i;
	int a[10];
	float b[10];
	cout<<"*****Selection sort using function template*****";
	cout<<"\n\nSORTING INT NUMBERS";
	cout<<"\n\nEnter no. of entries: ";
	cin>>n;
	cout<<"\nEnter numbers: ";
	for(i=0;i<n;i++)
	{
	  cin>>a[i];
    }
	sort<int>(a,n);
	
	cout<<"\n\nSORTING FLOATING POINT NUMBERS";
	cout<<"\n\nEnter no. of entries: ";
	cin>>n;
	cout<<"\nEnter numbers: ";
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	sort<float>(b,n);
	return 0;
}

