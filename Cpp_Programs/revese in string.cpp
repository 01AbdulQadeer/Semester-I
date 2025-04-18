#include<iostream>
#include<string.h>
using namespace std;
void rev(string & a)
{
	for(int i=a.length()-1;i>=0;i--)
	{
		cout<<a[i];
	}
} 
int main()
{
	string a;
	cin>>a;
	rev(a);
}