#include<iostream>
using namespace std;
int main()
{
	char arr[5],y;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<arr[i];
	}
	cin>>y;
	for(int i=0;i<5;i++)
	{
		if(arr[i]==y)
		{
			continue;
		}
		else
		{
			cout<<arr[i];
		}
	}
}