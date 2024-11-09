#include<bits/stdc++.h>
using namespace std;

bool ArmstrongNumber(int n)
{
   int originamNumber = n;
   int lastDigit, cubeOfNumber, finalNumber = 0;

   while (n > 0)
   {
      lastDigit = n%10;
      cubeOfNumber += pow(lastDigit, 3);
      n = n/10;   
     
   }
    return cubeOfNumber == originamNumber ? true : false;
    
} 

int main() 
{
    int n;
    cout<<"Enter a number ";
    cin >> n;
   bool number = ArmstrongNumber(n);
   cout << "Number is "<< number ;
}