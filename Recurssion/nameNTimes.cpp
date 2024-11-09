#include<bits/stdc++.h>
using namespace std;


void printNameNTimes(int count, int numberOfTimes);
int main()
{    
    int numberOfTimes;
    
    cout<<"Enter how many times you want to print it";
    cin>>numberOfTimes;

    printNameNTimes(1, numberOfTimes);
    return 0;
}

void printNameNTimes(int count, int numberOfTimes)
{    
    if(count > numberOfTimes)
    {
        return;
    }
    cout<<"Vishal Pal"<<endl;
    printNameNTimes(count+1, numberOfTimes);
}