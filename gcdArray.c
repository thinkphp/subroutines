#include <stdio.h>

//iterative variant through subtraction
int gcd_diff(int a, int b) {
    while(a!=b) {
      if(a > b) {
        a = a - b;
      } else{
        b = b - a; 
      }
    }
    return a;
}

//iterative Euclid
int gcd_euclid(int a, int b) {
    int r;
    while(b) {
      r = a % b;
      a = b;
      b = r;
    }  
    return a;
}

//recursive Euclid
int euclid_rec(int a, int b) {
    if(b == 0) {
      return a;
    } else {
      return euclid_rec(b, a % b);
    }
}

//recursive subtraction
int gcd_rec(int a, int b) {
    if(a == b) {
      return a;
    } else {
      if(a > b) return gcd_rec(a - b, b);
      else
                return gcd_rec(a, b -a); 
    }
}

int main() {
    
    //declare an array of integers
    int vec[] = {22,4,8,10,1012,72},
    //determine the length of the array
    n = sizeof(vec)/sizeof(vec[0]), 
    //let a variable 
    gcd;

    //compute the greatest common divisor from v[0] and v[1]
    gcd = euclid_rec(vec[0],vec[1]);

    for(int i = 2; i <= n; ++i) {
        
      gcd = euclid_rec(gcd, vec[i]);
        
    }

    printf("%d", gcd);

    return(0);
}
