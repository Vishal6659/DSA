#include<bits/stdc++.h>
using namespace std;

void Pattern6(int n){
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < n-i+1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
}

int main(){
    int n;
    cin>>n;
    Pattern6(n);
}