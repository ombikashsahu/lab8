//Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. 
//(Use functions for each of the task in the question)
#include<iostream>
using namespace std;

int largest(int ar[], int size)
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
return ar[0];
}
int smallest(int ar[], int size)
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
return ar[0];
}

double mean(int a[], int size) 
{ 
    int sum = 0; 
    for (int i = 0; i < size; i++)  
        {
            sum += a[i]; 
        }
    return (double)sum/(double)size; 
} 
  
// Function for calculating median 
double median(int a[], int size) 
{ 
// First we sort the array 
    for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
		    // check for even case 
			if(size % 2 != 0)
			{
			    return (double)a[size/2];	
			}
			// check for odd case 
			else
			{
			    return (double)(a[(size-1)/2] + a[size/2])/2.0;
			}
		}
	}
}

double mode(int a[], int size) 
{ 
// First we sort the array 
    for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
		    
        
		}
	}
}
    
//Main function
int main()
{
//Ask user to put the size of the array
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
//Call the function
    cout<<" largest value of array is:"<<largest(ar,size)<<endl;
	cout<<" smallest value of array is:"<<smallest(ar,size)<<endl;
	cout<<" mean value of array is:"<<mean(ar,size)<<endl;
	cout<<" median of value of array is:"<<median(ar,size)<<endl;
	cout<<" mode of value of array is:"<<mode(ar,size)<<endl;
	return 0;
}
