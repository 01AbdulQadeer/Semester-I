#include<iostream>
using namespace std;
int fact(int x)
{
	int fact=1;
	for(int i=x;i>=1;i--)
	{
			fact=fact*i;
			cout<<i<<" *  ";
	}
	cout<<" = ";
	return fact;
}
int main()
{
	int num;
	cin>>num;
	cout<<fact(num);
}