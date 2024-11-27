#include <iostream>
using namespace std;
char abecele[52];
void uzpildymas() {
    for (int i=0;i<26; i++) {
        abecele[i] = 'A'+i;
    }
    for (int i=0;i<26;i++) {
        abecele[i+26] = 'a'+i;
    }
}
void sifravimas(string zodis ,string raktas) {
    int m,k;
    for (int i = 0; i<zodis.size(); i++) {
        for (int j =0; j < 52; j++) {
            if (zodis[i] == abecele[j]) {
                m = j;
                break;
            }
        }
        for (int j = 0; j < 52; j++) {
            if (raktas[i % raktas.size()] == abecele[j]) {
                k = j;
                break;
            }
        }
        zodis[i] = abecele[(m + k) % 52 ];
    }
    cout << "Sifruotas zodis: "<< zodis << endl;

    for (int i = 0; i<zodis.size(); i++) {
        for (int j =0; j < 52; j++) {
            if (zodis[i] == abecele[j]) {
                m = j;
                break;
            }
        }
        for (int j = 0; j < 52; j++) {
            if (raktas[i % raktas.size()] == abecele[j]) {
                k = j;
                break;
            }
        }
        zodis[i] = abecele[(m - k + 52) % 52 ];
    }
    cout << "Desifruotas zodis: "<< zodis << endl;
}
void ascii(string zodis ,string raktas) {
    int m, k, c;
    for (int i = 0; i < zodis.length(); i++) {
        m = int(zodis[i]);
        k = int(raktas[i % raktas.size()]);
        c = 32 + ((m + k - 2 * 32) % 91);
        zodis[i] = char(c);
    }
    cout << "Sifruotas zodis: "<< zodis << endl;

    for (int i = 0; i<zodis.length(); i++) {
        m = int(zodis[i]);
        k = int(raktas[i % raktas.size()]);
        c = 32 + ((m - k +91) % 91);
        zodis[i] = char(c);
    }
    cout << "Desifruotas zodis: "<< zodis << endl;
}
////
int main() {
string zodis,raktas;
    int pasirinkimas;
    uzpildymas();
    while (pasirinkimas != 0) {
        cout << "Pasirinkite opcija"<<endl;
        cout << "1. Sifravimas ir desifravimas su abecele"<<endl;
        cout << "2. Sifravimas ir desifravimas su ASCII"<<endl;
        cout << "0. Iseiti"<<endl;
        cin>>pasirinkimas;
        switch (pasirinkimas) {
            case 1:
                cout<<"Iveskite zodi"<<endl;
                cin>>zodis;
                cout<<"Iveskite rakta"<<endl;
                cin>>raktas;
                sifravimas(zodis,raktas);
            break;
            case 2:
                cout<<"Iveskite zodi"<<endl;
                cin>>zodis;
                cout<<"Iveskite rakta"<<endl;
                cin>>raktas;
                ascii(zodis,raktas);
            break;
        }
    }
    return 0;
}
