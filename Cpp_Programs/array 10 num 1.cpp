#include<iostream>
using namespace  std;
int main()
{
	int a[10],sum_even,sum_odd,num_even,num_odd;
	sum_even=sum_odd=num_even=num_odd=0;
	for(int i=0;i<10;i++)
	{
		
	cout<<"\t\t enter "<<i+1<<"value"<<endl;
	   cin>>a[i];

	   	 if(a[i]%2==0)
	   	{
	   		num_even++;
	   		sum_even=sum_even+a[i];
		   }
		   else
		   {
		   	num_odd++;
		   	sum_odd=sum_odd+a[i];
		   }
	   }
	
	cout<<"\t\t____________________________\n";
	cout<<"\t\t  number even="<<num_even<<endl;
	cout<<"\t\t number odd ="<<num_odd<<endl;
	cout<<"\t\t sum of even ="<<sum_even<<endl;
	cout<<"\t\t sum of odd ="<<sum_odd<<endl;
}
