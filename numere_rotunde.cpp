/*
Numere Rotunde.

Se citeste n < 100000. Se cere sa se tipareasca numarul de numere mai mici sau egale decat n care, in binar au acelasi numar de cifre 0 si 1. De exemplu, 8 este un astfel de numar:
9(10) = 1001(2)
*/

#include <iostream>

using namespace std;

int rotund(int n ) {
    int zero = 0, one = 0; 
    while(n) {
      if(n % 2 == 0) zero++;
        else one++;
      n /= 2;  
    }
    return zero == one;
}

int main() {
    
    int i, n;
    cout<<"n=";
    cin>>n; 
    for(i = 1; i <= n; i++) {
      if(rotund(i)) {
        cout<<i<<" ";
      }
    }
}
