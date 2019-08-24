#include<iostream>
using namespace std;

int main()
{
	int i,j,n,temp;
	
	printf("Enter the length of array");
	cin>>n;
	
	int arr[n];
	
	printf("Enter the numbers");
	for(i=0;i<n;i++)
	cin>>arr[i];



for(i=0; i<(n-1); i++)
	{
		for(j=0; j<(n-i-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
   

	cout<<"\n";
int k=0;

	cout<<"Enter the value of Kth largest numbers\n";
	cin>>k;
	if (k<0 && k>n)
	{
	cout<<"Wrong input";
	} 
	else 
	{
		for(i=n-1;i>=n-k;i--)
		cout<<arr[i]<<" ";
	}
 
}