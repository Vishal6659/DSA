#include <bits/stdc++.h>
using namespace std;

void reverseCounting(int num, int number);
int main()
{
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;

    reverseCounting(1, number);
    return 0;
}
void reverseCounting(int num, int number)
{
    if(num > number)
    {
        return;
    }
    cout<<number<<endl;
    reverseCounting(num, number-1);
    
}