#include<bits/stdc++.h>
using namespace std;

int factorial(int number);
int main()
{
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;

    cout<<factorial(number);
   
}

int factorial(int number)
{
    if(number == 0)
    {
        return 1;
    }
    return number * factorial(number-1);
}