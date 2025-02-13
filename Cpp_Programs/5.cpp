#include<iostream>
using namespace std;

int main()
{
  int a,b;
  char op;
  cout<<"enter the integer"<<endl;
  cin>>a;
  cout<<"enter operator +(additin), -(subraction),*(multiplication),/(division)"<<endl;
  cin>>op;
  cout<<"enter the second integer"<<endl;
  cin>>b;
 if(op=='+')
 { 
 cout<<"total=" <<a+b;
 }
 else if(op=='-')
 {
 cout<<"total ="<<a-b;
 }
 else if(op=='*')
 {
 cout<<"total="<<a*b;
 }
 else if(op=='/')
 {
 cout<<"total="<<a/b;
 }
    return 0;
 }