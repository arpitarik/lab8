//using the library
#include<iostream>
using namespace std;
//function for arranging the array elements
void arrange(int a[],int n)
{
int flag,t,i;
//using loop for arranging in ascending order
do
{
flag=0;
for(i=0;i<(n-1);i++)
{
if (a[i]>a[i+1])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
flag+=1;
}
}
}while(flag!=0);
}
//functions to print nth maximum and nth min element
void klarge(int a[],int n,int k)
{
cout<<"\n the "<<k<<"th largest element is"<<a[n-k];
}
void ksmall(int a[],int n,int k)
{
cout<<"\n the "<<k<<"th smallest element is"<<a[k-1];
}
//using main function
int main()
{
int a[10],n,k;
//asking user for limit
cout<<"\n enter number of elements in array";
cin>>n;
//asking user for array elements
cout<<"\n enter array elements";
for(int i=0;i<n;i++)
cin>>a[i];
//calling function
arrange (a,n);
//asking user for value of k
cout<<"\n value of k is";
cin>>k;
//calling function for k
klarge(a,n,k);
ksmall(a,n,k);
cout<<"\n";
return 0;
}
//end of program
