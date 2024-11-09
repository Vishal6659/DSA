#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int n)
{
    int revNum = 0;
    int lastDigit = 0;    
    while (n > 0)
    {
        lastDigit = n%10;
        revNum = (revNum*10)+lastDigit;
        n = n/10;
    }
    return revNum;    
}
int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;
    int finalRes = reverseNumber(n);
    cout << "Reverse Number is " << finalRes;
}

