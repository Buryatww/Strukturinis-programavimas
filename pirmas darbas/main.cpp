#include <iostream>
using namespace std;
int main() {

    //pirma dalis
    string Vardas = "Kirill ";
    string Pavarde = "Korobov ";
    int Amzius = 21 ;
    int Grupe = 1 ;
    int Kursas = 1 ;
    string x ="Programu sistemos ";
    cout <<"Studento vardas " << Vardas << endl;
    cout <<"Studento pavarde " << Pavarde << endl;
cout <<"Studento amzius "<< Amzius<< endl;
    cout <<" Grupe "<< Grupe<< endl;
    cout <<" Kursas "<< Kursas<< endl;
    cout <<" Studiju programos pavadinimas " << x<<endl;
    cout <<"\n"<<endl;
    cout <<"---------------------------------- " <<endl;
    //antra  dalis
    string pavadinimas = "FK Zalgiris";
    int metai = 1947;
    string vadova = "Vilma Venslovaitiene";
 string arena ="LFF stadionas";
    int vietos = 5067;
    cout <<" Komandos pavadinimas  "<< pavadinimas<< endl;
    cout <<" Ikurimo metai "<< metai<< endl;
    cout <<" Klubo Vadove "<< vadova<< endl;
    cout <<" Klubo arena "<< arena<< endl;
    cout <<" Vietu skaicius "<< vietos<< endl;
    //trecia dalis
    string marke,modelis,spalva;
    int y;
    float litrazas;
    marke="Mercedes-Benz";
    modelis="Brabus classic";
    spalva="Tamsiai melynos";
    y = 1980;
    litrazas=3.5;
    cout<<"Automobilis "<<marke<< ' ' <<modelis<<' '<<"yra pagamintas "<< y<<' '<<"metais. "<<"Jo motoras "<<litrazas<<' '<<"litrazo. "<<"Automobilis yra "<<spalva<<' '<<"spalvos."<<endl;
//ketvirtas darbas
    int a,b;
    a=13;
    b=5;
    float c=17.5;
    cout<< a+b-c<<endl;
    cout<< 15.0/2+c<<endl;
    cout<< a/static_cast<double>(b)+2*c<<endl;
    cout<< 14%3+6.3+b/a<<endl;
    cout<< static_cast<int>(c)%5+a-b<<endl;
    cout<< 13.5/2+4.0*3.5+18<<endl;
    //penktas darbas
    float q,w,e,r,t;
    cout<<"Iveskite kintamuju duomenis "<<endl;
        cin>>q>>w>>e>>r>>t;
    cout<<"Skaiciu vidurkis lygus "<<(q+w+e+r+t)/5<<endl;
    //sestas darbas
   
    return 0;
}


