//using the library
#include<iostream>
using namespace std;
//function for sum
int summar(int x[],int n)
{
int y=0;
//sum variable
//using loop for finding the sum of array elements
for (int i=0;i<n;i++)
y+=x[i];
//print sum
cout<<"\n sum of the elements of the array is"<<y;
return 0;
}
//using main function
int main()
{
int x[10],n;
//asking the user for limit
cout<<"\n enter number of elements in the array";
cin>>n;
//asking the user for array elements
cout<<"\n enter array elements";
for(int i=0;i<n;i++)
cin>>x[i];
//calling the summing function
summar(x,n);
return 0;
}
//end of the program

