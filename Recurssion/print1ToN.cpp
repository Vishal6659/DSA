#include<bits/stdc++.h>
using namespace std;

void printTillCount(int num, int count);
int main()
{
    int count;
    cout<<"Enter how many times you want the counting"<<endl;
    cin>>count;

    printTillCount(1, count);
    return 0;
}

void printTillCount(int num, int count)
{
    if(num > count)
    {
        return;
    }
    cout<<num<<endl;
    printTillCount(num+1, count);
}