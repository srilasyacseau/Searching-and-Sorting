#include <iostream>
using namespace std;

void insertion_sort(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }

        a[j + 1] = temp;
    }
}

int main()
{
    int a[100], n, i;
    
    cout << "INSERTION SORT \n\n";

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "\nEnter "<< n << " elements: \n\n";
    for (i = 0; i < n; i++)
        cin >> a[i];

    insertion_sort(a, n);

    cout << "\n-------------------------------\n"; 
    cout << "Sorted array:\n\n";

    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

