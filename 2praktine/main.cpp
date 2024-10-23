#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
char raide;
int pas1;
int pas2;
int sk1,sk2;
int a;
int n;
bool arbalsis(char raide) {
    char balses[12]={'e','y','u','i','o','a','E','Y','U','I','O','A'};
    bool balsis;
    for (int i=0; i<12;i++){
        if (balses[i] == raide) {
            balsis=true;
            break;
        }
}
        return balsis;
    }

int dalyklis() {
    while (sk1 != sk2) {
        if (sk1>sk2) {
            sk1 = sk1 - sk2;
        }
        else {
            sk2=sk2-sk1;
        }
    }
    return sk1;
}
void fizzbuzz(int n) {
    for (int i=1; i <=n; i++) {
        if (i%3!=0&&i%5!=0) {
            cout<<i<<endl;
        }
        if (i%3==0&&i%5!=0) {
            cout <<"Fizz"<<endl;
        }
        else if (i%5==0&&i%3!=0) {
            cout <<"Buzz"<<endl;
        }
        else if (i%3==0&&i%5==0) {
            cout <<"FizzBuzz"<<endl;
        }
    }
}
void zaidimas() {
    srand(time(NULL));
   int b= rand()%100 + 1;
    while(a!=b&&a!=0) {
        if (a>b) {
            cout<<"Ivestas skaicius yra didesnis,bandykite dar,arba iveskite 0 kad pradet is naujo"<<endl;
            cin>>a;
        }
        else if (a<b) {
            cout<<"Ivestas skaicius yra mazesnis,bandikite dar,arba iveskite 0 kad pradet is naujo"<<endl;
            cin>>a;
        }
    }
   if (a==b) {
       cout<<"Puiku,skaicius yra teisingas!"<<endl;
   }
}
void pradzia() {
    cout<<"Iveskite tinkama skaiciu jusu norimos programos ivykdimui"<<endl;
    cout<<"1.Patikrinti ar ivesta raide yra balse"<<endl;
    cout<<"2.Didziausias bendras dalyklis tarp 2 skaiciu"<<endl;
    cout<<"3.Zaidimas"<<endl;
    cout<<"4.Fizzbuzz"<<endl;
    cout<<"0.Uzbaigti programa"<<endl;
    cin>>pas1;
}
int main() {
    pradzia();
    do {
        switch (pas1) {
            case 1:
                cout<<"Iveskite raide kuria norit patikrint ar balse"<<endl;
            cout<<"Iveskite nuli jei norit grizti"<<endl;
            cin>>raide;
            if(raide=='0') {
                pradzia();
            }
            if (arbalsis(raide)) {
                cout<<"Jusu raide yra balse!"<<endl;
            }
            else if(raide!='-') {
                cout<<"Jusu raide nera balse!"<<endl;
            }
            break;
            case 2:
                cout<<"Iveskite du realius skaicius kad surasti ju DBD"<<endl;
            cout<<"Jei norit uzbaigti programa irasykit nuli"<<endl;
            cin>>sk1;
            if (sk1==0) {
                pradzia();
            }
            else {
                cin>>sk2;
                cout<<"Ivestu skaiciu DBD lygus: "<<dalyklis()<<endl;
            }
            break;
            case 3:
                cout<<"Spekit skaiciu nuo 1 iki 100"<<endl;
            cout<<"Noredami grizti irasykite 0"<<endl;
                cin>>a;
            if(a==0) {
                pradzia();
            }
            else {
                zaidimas();
            }
            break;
            case 4:
                cout<<"Iveskite ribojimo skaiciu"<<endl;
            cout<<"Iveskite 0 kad sugrizti"<<endl;
            cin>>n;
            if(n==0) {
                pradzia();
            }
            else {
                fizzbuzz(n);
            }
            break;
            case 0:
                break;
            default:
                cout<<"Geras bandymas! Bandykite dar<3"<<endl;
            pradzia();
        }
    }
        while(pas1!=0);
    cout<<"Viso gero!";
    return 0;
}

