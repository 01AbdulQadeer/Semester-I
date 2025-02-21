 #include<iostream>
 using namespace std;
 bool prime(int x){
 
 int sum=0;
 for(int i=1;i<=x;i++)
 {
     if(x%i==0)
 	 {
 	    sum++;
     }
     }
     if(sum==2)
     {
 	    return true;
     }
     else
     {
 	     return false;
     }
}
 int main()
 {
	int x;
	cout<<"enter the number :";
	cin>>x;
	cout<<prime(x);
 }