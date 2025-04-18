#include<iostream>
using namespace std;
int add(int x,int y)
{
   int result=x+y;
}
int add(int x,int y, int  z)
{
	 int result=x+y;
}
int add(int x,int y,int z,int w)
{
	w=x+y+z;
}
int subtract(int x,int y)
{
  int result=x-y;
}
int subtract(int x,int y,int z)
{
    int result=x-y;
}
int subtract(int x,int y,int z,int w)
{
   w=x-y-z;
}
int multiply(int x,int y)
{
   int result=x*y;
}
int multiply(int x,int y,int z)
{
    int result=x*y;
}
int multiply(int x,int y,int z,int w)
{
   w=x*y*z;
}
int divide(int x,int y)
{
   int    result=x/y;
}
int square(int x)
{
   int result=x*x;
}
int cube(int y)
{
   int result=y*y*y;
}
int main()
{
	int x,y,z,w;
	cout<<"first number"<<endl;
	cin>>x;
	cout<<"second number"<<endl;
	cin>>y;
	cout<<"third number"<<endl;
	cin>>z;
	cout<<"add"<<add(x,y,z)<<endl;
	cout<<"add"<<add(x,y,z,w)<<endl;
	cout<<"subtract"<<subtract(x,y)<<endl;
	cout<<"subtract"<<subtract(x,y,z)<<endl;
	cout<<"subtract"<<subtract(x,y,z,w)<<endl;
	cout<<"multiply"<<multiply(x,y)<<endl;
	cout<<"multiply"<<multiply(x,y,z)<<endl;
	cout<<"multiply"<<multiply(x,y,z,w)<<endl;
	cout<<"divide"<<divide(x,y)<<endl;
	cout<<"square"<<square(x)<<endl;
	cout<<"cube"<<cube(y)<<endl;
}
   

