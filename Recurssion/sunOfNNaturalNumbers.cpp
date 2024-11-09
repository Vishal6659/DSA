#include<bits/stdc++.h>
using namespace std;


//WAY - 1

int sumOfFirstNNaturalNumbersUsingRecurssion(int number);

int main()
{
    int number = 5;
   

   // sumOfFirstNNaturalNumbers( number);
   cout << sumOfFirstNNaturalNumbersUsingRecurssion(number)<<endl;
   return 0;
}


int sumOfFirstNNaturalNumbersUsingRecurssion(int number)
{
    if(number == 0)
    {       
        return 0;
    }
    return number + sumOfFirstNNaturalNumbersUsingRecurssion(number-1);
} 