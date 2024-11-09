#include<bits/stdc++.h>
using namespace std;

int countNumbers(int n){
    int counter = 0;
    while (n > 0)
    {     
        counter = counter+1;
        n = n/10;        
    }   
    return counter;
}
int main(){
    int n;
    cout<<"enter the number ";
    cin >> n;
    int count = countNumbers(n);
    cout<<"Number has " << count << " digits";
}