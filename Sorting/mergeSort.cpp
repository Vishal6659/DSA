#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int startIndex, int lastIndex)
{
    int midIndex = (startIndex + lastIndex) / 2;
    int len1 = midIndex - startIndex + 1;
    int len2 = lastIndex - midIndex;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = startIndex;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = midIndex + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = startIndex;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // Copy the remaining elements from first[]
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    // Copy the remaining elements from second[]
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;  // Clean up memory
    delete[] second; // Clean up memory
}

void mergeSort(int *arr, int startIndex, int lastIndex)
{
    if (startIndex >= lastIndex)
        return;

    int midIndex = (startIndex + lastIndex) / 2;

    mergeSort(arr, startIndex, midIndex);        // Sort the left half
    mergeSort(arr, midIndex + 1, lastIndex);    // Sort the right half
    merge(arr, startIndex, lastIndex);          // Merge the sorted halves
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

    mergeSort(arr, 0, arrayLength - 1); // The correct range is 0 to arrayLength-1

    cout << "Sorted array: ";
    for (int x = 0; x < arrayLength; x++)
    {
        cout << arr[x] << " ";
    }

    cout << endl;
    return 0;
}
