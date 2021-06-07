#include <stdio.h>

int next(int n) {

    if(n == 9) {

       return 1;

    } else {

      return n+1;
    }
}

void triangle(int m, int n) {

     int n2 = n;

     for(int i = 1; i <= m; i++) {

             for(int j = 1; j <= i; j++) {

                 printf("%d ", n2);
                 n2 = next(n2);     
             } 
              
             printf("\n");
     }
}

int main() {
    int n,m;
    scanf("%d %d", &m, &n);
    triangle(m,n);
}
