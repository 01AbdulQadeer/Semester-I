#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a>0)
    {
    cout<<"positive";
    }
   else if(a<0)
    {
    cout<<"negative";
    }
    else
   {
      cout<<"zero";
   }
     if(a%2==0)
    {
    cout<<"even";
    }
    else
    {
    cout<<"odd";   }
    return 0;
}