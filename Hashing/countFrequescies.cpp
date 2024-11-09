#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arrayLength;
    cout <<"Enter the length of am Array ";
    cin>>arrayLength;

    int arr[arrayLength] = {0};
    cout<<"Enter the elements in an Array ";
    for (int i = 0; i < arrayLength; i++)
    {
        cin>>arr[i];
    }

   unordered_map<int, int> unMap;

   for (int j = 0; j < arrayLength; j++)
   {
        unMap[arr[j]]++;
   }

   for(auto x: unMap)
   {
        cout<<x.first << " " << x.second << endl; 
   }
   
    return 0;
   
   
}