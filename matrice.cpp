/*
Sa se scrie o functie care citeste o matrice cu elemente numere intregi dintr-un fisier text. Pe prima linie a fisierului sunt doua valori m (numarul de linii ale matricei) si n (numarul de coloane ale matricei). Urmatoarele m linii ale fisierului contin, in ordine, elementele aflate pe fiecare linie a matricei.
*/
#include <iostream>
#define FIN "matrice.in"

using namespace std;

int mat[100][100];

void readMatrix(int &m, int &n) {
      
     freopen(FIN, "r", stdin);
     cin>>m>>n;    
     for(int i = 0; i < m; ++i) {
       for(int j = 0; j < n; ++j) {
         cin>>mat[i][j];
       }
     }
}
int main() {
  int m, n;  

  readMatrix(m, n);
  
  cout<<m<<" "<<n<<endl;

  for(int i = 0; i < m; ++i) {
       for(int j = 0; j < n; ++j) {
         cout<<mat[i][j]<<" ";
       }
       cout<<"\n";
     }
}
