#include <iostream>
using namespace std;
int smallest(int arr[],int k,int n)
{
	int pos=k,small=arr[k],i;
	for(i=k+1;i<n;i++)
	{
		
		if(arr[i]<small)
		{
			small=arr[i];
			pos=i;
		}
	}
	
	return pos;
}

void selection_sort(int arr[],int n)
{
	int k,pos,temp;
	
	for(k=0;k<n-1;k++)
	{
		pos=smallest(arr,k,n);
		temp=arr[k];
		arr[k]=arr[pos];
		arr[pos]=temp;
	}
}

int main()
{
	int arr[100],i,n;
	
	cout << "SELECTION SORT \n\n";
	
	cout << "Enter the number of elements: ";
	cin >> n;
	
	cout << "\nEnter " << n << " elements: \n\n";
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	selection_sort(arr,n);
	
	cout << "\n-------------------------------\n\n";
	
	cout << "Sorted array: \n\n";
	for(i=0;i<n;i++)
	{
		cout << arr[i] << " ";
	}
	
	return 0;
}
