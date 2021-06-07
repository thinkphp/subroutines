#include <iostream>

using namespace std;

typedef unsigned int uint;

uint makeCube(uint n) {
	
	uint cube = 0;
	
	while( n ) {
		
		uint m = n % 10;
		
		cube += m * m * m;
		
		n /= 10;
	}
	
	return cube;
}

int main() {
	
    uint n, k;	
    
	cin>>n;
	
	uint arr[100];
	
	uint found = 0;
	
	k = 0;
	
	arr[ k ] = n;
	 
	do { 
	k++; 
	arr[ k ] = makeCube(arr[ k - 1 ]);
	
	for(int i = 0; i < k; ++i) 
	
	   if(arr[k] == arr[i]) found = 1;
	   
	}while(!found);	
	
	for(int i = 0; i < k; ++i) cout<<arr[i]<<" ";
	   
	cout<<arr[1];
	
	return 0;
}
