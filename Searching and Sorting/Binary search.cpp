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

int binary_search(int arr[], int n, int key)
{
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            cout << endl << "Key found at index " << mid << endl;
            return mid;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << endl << "Key not found" << endl;
}


int main() 
{ 
    int arr[100],n,i,key,index; 
    
    cout << "BUBBLE SORT AND BINARY SEARCH \n\n";
    
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
    
    cout << endl << endl;
    
	cout << "\n-------------------------------\n\n";
     
    cout << "Enter the key to search: ";
    cin >> key;
    
    
    index=binary_search(arr,n,key);
    
    return 0; 
}
