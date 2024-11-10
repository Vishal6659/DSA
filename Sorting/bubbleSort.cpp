#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int arrayLength)
{
    for (int i = 0; i < arrayLength - 1; i++)
    {              
        for (int j = 0; j < arrayLength - i; j++)
        {            
            if (arr[j] > arr[j + 1])
            {                
                swap(arr[j], arr[j+1]);
            }
        }       
    }
}

int main()
{
    cout << "Enter the length of an Array ";
    int arrayLength;
    cin >> arrayLength;

    int arr[arrayLength];
    cout << "Enter the elements in an Array ";
    for (int i = 0; i < arrayLength; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, arrayLength);
    for (int x = 0; x < arrayLength; x++)
    {
        cout << arr[x] << " ";
    }
}