#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int main()
{
	int arr[100],n,x,i; 
	
	cout << "LINEAR SEARCH \n\n";
	
	cout << "Enter the number of elements: ";
	cin >> n;
	cout << "\nEnter "<< n << " elements: \n\n";
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	cout << "\nThe elements are: \n\n";
	
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << " ";
	}
	
	cout << "\n\n-------------------------------\n\n";
	
	cout << "Enter the element to be searched: ";
	cin >> x;

	int result = search(arr, n, x);
	(result == -1)
		? cout << "\nElement is not present in array"
		: cout << "\nElement found at index " << result;
	return 0;
}

