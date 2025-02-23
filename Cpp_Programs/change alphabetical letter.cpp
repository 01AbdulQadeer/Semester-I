#include<iostream>
using namespace std;

int main()
{
 // int x;
//cout<<"enter any number"<<endl;
//cin>>x;
//for(int i=1; i<=15; i++)
//cout<<i*x<<endl;

   char alphabet;
  cout<<"alphabetical changes"<<endl;
 cin>>alphabet;
if(alphabet>='a' && alphabet<='z')
{
alphabet=alphabet -32;
cout<<"change case :"<<alphabet<<endl;

}
else if(alphabet>='A' && alphabet<='Z')
{
alphabet=alphabet + 32;
cout<<"change case :"<<alphabet<<endl;

}
else
{
cout<<"try again";
}

}