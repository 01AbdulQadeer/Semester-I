#include<iostream>
using namespace std;
int add(int x)
{

    int sum=0;
    for(int i=1;i<=x;i++)
 {
	sum+=i;
} 

  return sum;
}
int main ()
{
	int num,sum=0;
	cin>>num;
	cout<<add(num);
//	int n,x[n],sum=0;
//	cin>>n;
//	for (int i=1;i<=n;i++)
//	{
//		sum+=x[n];
//		cout<<sum<<endl;
//		
//	}
//	

	
}