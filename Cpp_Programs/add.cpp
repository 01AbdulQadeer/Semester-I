#include<iostream>
using namespace std;
int add(int x)
{
 	int sum=0;
	 for(int i=1;i<=x;i++)
	 {
		sum+=i;
		cout<<i<<" + "; 	
	}   
	return sum;
}
int main()
{
	int num;
	cin>>num;
	cout<<add(num);	
}