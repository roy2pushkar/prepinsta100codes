#include <bits/stdc++.h>
using namespace std;

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);


     cout << "Sorted array: \n";
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
}

/*void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
*/

// Driver code
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin>>arr[i];

    bubbleSort(arr, N);
    //cout << "Sorted array: \n";
    //printArray(arr, N);
    return 0;
}
