#include<iostream>
using namespace std;

void Pattern5(int n){
    for (int i = 0; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout<<"* ";
        }
        cout << endl;
    }
    
}

int main(){
    int n;
    cin >> n;
    Pattern5(n);
}