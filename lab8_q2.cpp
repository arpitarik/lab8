//using the library
#include<iostream>
using namespace std;
//function for finding the mean
void mean(int a[],int n)
{
int x=0;
//mean variable
//using loop for finding the sum
for(int i=0;i<n;i++)
x+=a[i];
//finding mean
float b=float(x)/float(n);
//print mean
cout<<"\n mean of the elements of the array is"<<b<<endl;
}
//function for printing the median
void median(int a[],int n)
{
int flag,t,i,j;
//using loop for arranging the elements in ascending order
do
{
flag=0;
for(i=0;i<(n-1);i++)
{
if (a[i]>a[i+1])
{ t=a[i];
a[i]=a[i+1];
a[i+1]=t;
flag+=1;
}
}
}while(flag!=0);
//print median
if (n%2==0)
{ float b=(float(a[n/2])+float (a[(n/2)-1]))/2;
cout<<"\n median ="<<b;
}
else
cout<<"\n median ="<<a[n/2];
}
//function to print max and min value
void maxmin(int a[], int n)
{
cout<<"\n the maximum value in the array is "<<a[n-1];
cout<<"\n the minimum value in the array is "<<a[0];
}
//using the main function
int main()
{
int a[0],n;
//asking user for limit
cout<<"\n enter number of elements in the array";
cin>>n;
//asking user for array elements
cout<<"\n enter array elements";
for(int i=0;i<n;i++)
cin>>a[i];
//calling the mean function
mean(a,n);
//calling the median function
median(a,n);
//calling maxmin function
maxmin(a,n);
return 0;
}
//end of program

