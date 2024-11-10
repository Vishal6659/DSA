#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int arrayLength)
{
    for (int i = 0; i < arrayLength-2; i++)
    {
        int minimumEle = i;
        for (int j = i; j <= arrayLength-1; j++)
        {
            if(arr[j]<arr[minimumEle])
            {
                minimumEle = j;
            }
        }
        int temp = arr[minimumEle];
        arr[minimumEle] = arr[i];
        arr[i] = temp;
    }
    
}

int main()
{
    cout<<"Enter the length of an Array ";
    int arrayLength;
    cin>>arrayLength;

    int arr[arrayLength];
    cout<<"Enter the elements in an Array ";
    for (int i = 0; i < arrayLength; i++)
    {
        cin>>arr[i];
    }   
    selectionSort(arr, arrayLength);
    for (int x = 0; x < arrayLength; x++)
    {
        cout<<arr[x]<<" ";
    }
    
    
    return 0;
}
