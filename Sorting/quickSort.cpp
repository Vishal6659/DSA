#include<bits/stdc++.h>
using namespace std;

int partitionFun(int arr[], int start, int end)
{
    int pivot = arr[start];

    int cnt = 0;
    for (int i = start+1; i <= end; i++)
    {
        if(arr[i]<= pivot)
        {
            cnt++;
        }
    }

    int pivotIndex = start + cnt;
    swap(arr[pivotIndex], arr[start]);

    int i = start;
    int j = end;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
    
}
void quickSort(int arr[], int start, int end)
{
    if(start >= end){return;}
    int partition = partitionFun(arr, start, end);

    quickSort(arr, 0, partition-1);
    quickSort(arr, partition+1, end);
}
int main()
{
     cout << "Enter the length of the array: ";
    int arrayLength;
    cin >> arrayLength;

    int arr[arrayLength];
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < arrayLength; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, arrayLength - 1);

     cout << "Sorted array: ";
    for (int x = 0; x < arrayLength; x++)
    {
        cout << arr[x] << " ";
    }

    cout << endl;
    return 0;
}