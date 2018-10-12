// to find the sum of the elements of the array.
#include<iostream>
using namespace std;
//declaring the function
int array( int ar[], int n ) 
{
   int i;
   int sum = 0;
   for (i=0;i<n;i++)
	{
		sum = sum + ar[i];
	}
   cout << "sum of the array elements = "<<sum<<endl;
}

int main()
{
//ask the user to input the size of array	
   int n;
   cout<<"enter size"<<endl;
   cin>>n;
   int ar[n];
//ask the user to input the values inside the array.
   cout<<"enter the values in the array"<<endl;
    for (int i=0;i<n;i++)
	{
		cin>>ar[i];
	}   
    array(ar,n);
   return 0;
}
