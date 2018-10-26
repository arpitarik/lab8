//using the library
#include<iostream>
using namespace std;
//function to merge the arrays
void merge (int a[],int n,int ar[],int b,int c[])
{
int i;
//using loop to merge the arrays
for(i=0;i<n;i++)
c[i]=a[i];
for(i=n;i<n+b;i++)
c[i]=ar[i-n];
cout<<"\n printing the merged array";
for(i=0;i<n+b;i++)
cout<<" "<<c[i];
}
//function for finding the max and min of the two arrays
void arrange (int a[],int n)
{
int flag,t;
//using loop for arranging the array elements in ascending order
do
{flag=0;
for(int i=0;i<(n-1);i++)
{
if (a[i]>a[i+1])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
flag++;
}
}
}while(flag!=0);
cout<<"\n maximum of the elements in both the array is "<<a[n-1];
cout<<"\n minimum of the elements in both the array is "<<a[0];
}
//using main function
int main()
{
int a[15],ar[15],c[30],n,b;
//asking user for limit of first array
cout<<"\n enter number of elements in the 1st array ";
cin>>n;
//asking user for array elements
cout"\n enter array elements for first array";
for(int i=0;i<n;i++)
cin>>a[i];
//asking user for limit of seconded array elements
cout<<"\n enter number of elements in the 2nd array ";
cin>>b;
//asking user for array elements
cout<<"\n enter array elements for second array";
for(int i=0;i<b;i++)
cin>>ar[i];
//calling the function to merge arrays
merge (a,n,ar,b,c);
//calling the function for finding min of max of the arrays
arrange(c, (n+b));
cout<<"\n";
return 0;
}
//end of program

