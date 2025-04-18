#include <iostream>
using namespace std;
int main()
{
	int days=0,hours=0,mint=0,x=0;
	cout<<"press 1 for days into minutes \n ";
	cout<<"press 2 for days into hours \n ";
	cin>>x;
	switch(x)
	{
		case 1:
			cout<<"enter days number ";
			cin>>days;
			cout<<days*1440 ;
			break;
			
		case 2:
		    cout<<"enter days number \n";
			cin>>days;
			cout<<days*24;
			 break;
			 
		default:
		 cout<<"invalid nmber ";	 	
	}
	
}