#include<bits/stdc++.h>
using namespace std;

int GCD (int firstNumber, int secondNumber)
{
    int firstCFactor, secondCFactor = 1;
    int gcdVariable;
    for (int i = 1; i <= min(firstNumber, secondNumber); i++)
    {
        if(firstNumber%i == 0 && secondNumber%i == 0)
        {
            gcdVariable = i;
        }  
    }
    return gcdVariable;
}

int main()
{
    int firstNumber, secondNumber;
    int gCdNumber;
    cout << "Enter First number ";
    cin >> firstNumber;
    cout << "Enter Second number ";
    cin >> secondNumber;
    gCdNumber = GCD(firstNumber, secondNumber);
    cout << "GCD is " << gCdNumber;
}