#include <iostream>
#define FIN "frecventa.txt"

using namespace std;

char freq[26];

int sum = 0;

void processing(char ch) {

     if(ch >= 'A' && ch <= 'Z') {
        freq[ch - 'A']++;
        sum++;    
     }
}

void display() {
     float fre, frequence;
     for(char ch = 'A'; ch <= 'Z'; ch++) {
         fre = freq[ch - 'A'];
         frequence = float(fre / sum * 100);
         cout<<ch<<" - "<<fre<<" - "<<frequence<<endl;
     }
}

int main() {
    freopen(FIN, "r", stdin);
    char ch;

    while(cin>>ch) {
        processing(ch);
    }
    display();
}
