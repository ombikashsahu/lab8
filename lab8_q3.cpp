// Write a program for kth largest, kth smallest element of an array. 
#include<iostream>
using namespace std;
//Define function with proper parameters
// write a funcn for the kth largest.
int klarge(int ar[], int size,int k)
{
	int x;
//sort array in descending order
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ar[i]<ar[j])
			{
				x=ar[i];
				ar[i]=ar[j];
				ar[j]=x;
			}
		}
	}
return ar[k-1];
}
// writing funcn for the kth smalllest.
int ksmall(int ar[], int size,int k)
{
	int x;
//sort array in ascending order
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ar[i]>ar[j])
			{
				x=ar[i];
				ar[i]=ar[j];
				ar[j]=x;
			}
		}
	}
return ar[k-1];
}
//Main function
int main()
{
//Ask the user to put the size of the array
	int size;
	cout<<"Enter size"<<endl;
	cin>>size;
	int ar[size];
//Ask user to input values to the array
	cout<<"Put input to array"<<endl;
//Use loop to input the values
	for(int i=0;i<size;i++)
	{
		cin>>ar[i];
	}
//Ask user for the k value
cout<<"Enter the value of k"<<endl;
int k;
cin>>k;
//Call the function
	cout<<k<<"th largest value of array is:"<<klarge(ar,size,k)<<endl;
	cout<<k<<"th smallest value of array is:"<<ksmall(ar,size,k)<<endl;
	return 0;
}
