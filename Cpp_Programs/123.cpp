#include <iostream>
using namespace std;
void sum()
{
	int n1,n2;
	cout<<"enter first number "<<endl;
	cin>>n1;
	cout<<"enter second number "<<endl;
	cin>>n2;
	cout<<"the sum ="<<n1+n2<<endl;
}

void subtract()
{
	int n1,n2;
	cout<<"enter first number "<<endl;
	cin>>n1;
	cout<<"enter second number "<<endl;
	cin>>n2;
	cout<<"the subtract ="<<n1-n2<<endl;
}

void product()
{
	int n1,n2;
	cout<<"enter first number "<<endl;
	cin>>n1;
	cout<<"enter second number "<<endl;
	cin>>n2;
	cout<<"the product ="<<n1*n2<<endl;
}

void division()
{
	int n1,n2;
	cout<<"enter first number "<<endl;
	cin>>n1;
	cout<<"enter second number "<<endl;
	cin>>n2;
	cout<<"the division ="<<n1/n2<<endl;
}
 



int main()
{
 int n;
 cout<<"press 1 for addition "<<endl;
 cout<<"press 2 for subtraction "<<endl;
 cout<<"press 3 for product "<<endl;
 cout<<"press 4 for division "<<endl;
 cout<<"press 5 for square "<<endl;
 cout<<"press 6 for cube "<<endl;
 cin>>n;
 if(n==1)
 sum();
 else if(n==2)
 subtract();
 else if(n==3)
 product();
 else if(n==4)
 division();
  
 else
 cout<<"invalid nmber"<<endl;
 
}
