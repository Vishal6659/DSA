#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int arrayLength)
{
    for (int i = 1; i < arrayLength; i++)
    {
        int temp = i;
        int j;
        for (j = i-1; j >= 0; j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1] = arr[j];
            }  
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
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
    insertionSort(arr, arrayLength);
    for (int x = 0; x < arrayLength; x++)
    {
        cout << arr[x] << " ";
    }
}