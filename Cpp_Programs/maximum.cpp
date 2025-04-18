#include<iostream>
using namespace  std;
int main()
{
	int a[10],max,min;
   	for(int i=0;i<10;i++)
	{
		cout<<"enter "<<i+1<<"number ";
		cin>>a[i];
	}
	 max=min=a[0];
	 for(int i=0;i<10;i++)
	 {
	  if(max<a[i])
	  max=a[i];
	  if(min>a[i])
	  min=a[i];
	 }
	 cout<<"here is maximum number "<<max<<endl;
	 cout<<"here is manimum number "<<min;
	
}
