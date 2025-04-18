#include<iostream>
using namespace std;
int main ()
{
	int num,sum=0;
	cout<<"check whether prime number or not ";
	cout<<"_________________________________\n";
	cout<<"check the number prime ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			sum++;
		}
		if(sum==2)
		{
			cout<<"prime number \n";
		}
		else
		{
			cout<<"is not prime number ";
		}
		
	}
}