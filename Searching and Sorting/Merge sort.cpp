#include <iostream>
using namespace std;

void merge(int arr[], int begin, int mid, int end) 
{
    int i = begin, j = mid + 1, index = begin, temp[100], k;

    while (i <= mid && j <= end) 
	{
        if (arr[i] < arr[j]) 
		{
            temp[index] = arr[i];
            i++;
        }
        
        else 
		{
            temp[index] = arr[j];
            j++;
        }
        
        index++;
    }

    while (i <= mid) 
	{
        temp[index] = arr[i];
        i++;
        index++;
    }

    while (j <= end) 
	{
        temp[index] = arr[j];
        j++;
        index++;
    }

    for (k = begin; k < index; k++)
        arr[k] = temp[k];
}

void merge_sort(int arr[], int begin, int end)
{
    int mid;
    if (begin < end)
    {
        mid = (begin + end) / 2;
        merge_sort(arr, begin, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, begin, mid, end);
    }
}


int main() 
{ 
	int arr[100],n,i; 
	
	cout << "MERGE SORT \n\n";
	
	cout << "Enter the number of elements: ";
	cin >> n;
	cout << "\nEnter "<< n << " elements: \n\n";
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	merge_sort(arr,0,n-1); 
	cout << "\n-------------------------------\n"; 
	cout << "\nSorted array: \n\n"; 
	for(i=0;i<n;i++)
	cout << arr[i] << " ";
	return 0; 
}

