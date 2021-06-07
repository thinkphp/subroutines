/*
 Se citesc doua numere naturale m < n; Se cere sa se tipareasca toate numerele Superpalindrom 
 aflate intre m si n. Un numar este palindrom daca citit diresc si invers rezultatul este acelasi.
 */
#include <iostream>
 
using namespace std;
 
int isPalindrom(int n) {
 
	int m = n, s = 0;
 
	while(n) {
	   s = s * 10 + n % 10;
	   n = n / 10;
	}
 
	if(s == m) {
	   return 1;	
	} else {
	   return 0;	
	}
}
 
int main(void) {
	int m, n;
 
	cout<<"m = "<<endl<<"n = ";
	cin>>m>>n;
	for(int i = m; i <= n; ++i) {
 
		if(isPalindrom( i )) {
			if(isPalindrom(i * i)) 
		         cout<<i<<endl;	
		}
	}
 
}
