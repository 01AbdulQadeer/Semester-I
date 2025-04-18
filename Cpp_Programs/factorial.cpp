#include<iostream>
using namespace std;
long int fact(int x)
{
	long int factorial =1;
	for(int i=1;i<=x;i++)
	{
		factorial=factorial*i;
	}
	return factorial;
}
int main()
{
	int n;
	cout<<"enter a number "<<endl;
	cin>>n;
	cout<<"factorial of ="<<fact(n)<<endl;
	cout<<"factorial of ="<<fact(n+1)<<endl;
	cout<<"factorial of ="<<fact(7)<<endl;
}
  
