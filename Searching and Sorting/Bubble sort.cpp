#include <iostream> 
using namespace std; 


void bubbleSort(int arr[], int n) 
{ 
	int i, j,temp;
	for (i = 0; i < n - 1; i++) 
	{
         cout << "\nPASS " << i+1 <<": ";
		
		for (j = 0; j < n - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
				
			
		}
					
     
	for (j = 0; j<n; j++) 
	{
		cout << arr[j] << " "; 
		
    } 
  }
	cout << endl; 
} 

int main() 
{ 
	int arr[100],n,i; 
	
	cout << "BUBBLE SORT \n\n";
	
	cout << "Enter the number of elements: ";
	cin >> n;
	cout << "\nEnter "<< n << " elements: \n\n";
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	bubbleSort(arr, n); 
		cout << "\n-------------------------------\n"; 
	cout << "\nSorted array: \n\n"; 
	for(i=0;i<n;i++)
	cout << arr[i] << " ";
	return 0; 
}
