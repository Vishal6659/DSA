#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int n)
{
    int straightNumber = n;
    int reverseNumber = 0;
    while (n > 0)
    {
        int lastDigit = n%10;
        reverseNumber = (reverseNumber*10)+lastDigit;
        n = n/10;
    }
    if (reverseNumber == straightNumber)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n = 0;
    cout<<"Enter a number ";
    cin >> n;
    bool isPalindrome = false;
    isPalindrome = checkPalindrome(n);
    if(isPalindrome == 1)
    {
        cout << "Number is Palindrome";
    } 
    else
    {
        cout << "Number is not Palindrome";
    } 
}