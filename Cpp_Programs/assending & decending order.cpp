#include <iostream>
using namespace std;
int main()
{
	char a,b,c;
	cout<<"enter three alphabat for asending and decending order "<<endl;
	cin>>a>>b>>c;
	int x;
	cout<<"press 1 for assending order \n";
	cout<<"press 2 for desending order \n";
	cout<<"your choice "<<endl;
	cin>>x;
	switch(x)
	{
		case 1:
			cout<<"enter the asending sequenece "<<endl;
			for(char i='a';i<='z';i++)
			
			{	if(i==a||i==b||i==c)
				{
					cout<<i<<"  \n";
					
				}
			}
			break;
		case 2:
		      cout<<"enter the decending sequence"<<endl;
			  for(char j='z';j>='a';j--)
			  {
                if(j==a||j==b||j==c)
			  	{
			  		cout<<j<<"   \n";
				}
		     	}
		     	break;
		default:
			{
			
			cout<<"invalid choices ";
		    }
	}
	


	
}