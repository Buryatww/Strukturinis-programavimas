#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

struct menu {
    string name;
    double price;
};

menu men[8] = {
    {"Kiasiniene",1.45},
    {"Kiaulienos sonine su keptu kiausiniu",2.45},
    {"Kieksiukas su vysnia",0.99},
    {"Prancuziskas skrebutis",1.99},
    {"Vaisiu salotos",2.49},
    {"Pusryciu dribsniai",0.69},
    {"Kava",0.50},
    {"Arbata",0.75},
};


struct result {
    int pozicija;
    int kiekis;
};

void getdata(menu men[], int i, string name, double price) {
    men[i].name = name;
    men[i].price = price;
}

void showmenu() {
    for (int i = 0; i < 8; i++) {
        cout << left << i + 1 << "." << setw(40) << men[i].name << right << fixed << setprecision(2) << men[i].price << " Eur" <<endl;
    }
    cout << "Iveskite 0, noredami baigti uzsakyma " << endl;
}

result uzs[8]{};

void uzsakymas(int pozicija, int kiekis) {
    uzs[pozicija - 1].pozicija = pozicija - 1;
    uzs[pozicija - 1].kiekis = kiekis;
    cout << "Uzsakyta! " << endl;
}
void iskvietimas() {
    int pas, kiek;
    string patvirtinimas;
    while (true) {
        showmenu();
        cout << "Ka noretumet uzsisakyt? " << endl;
        cin >> pas;
        if (pas == 0) {
            break;
    }
        if (pas > 8 ) {
            cout << "Nera tokio pasirinkimo" << endl;
            continue;
        }
        cout << "Kiek porciju? " << endl;
        cin >> kiek;
        uzsakymas(pas, kiek);
    }
}
void saskaita() {
    int uzslength = size(uzs);
    double mokesciai;
    double bendra;
    for (int i = 0; i < uzslength; i++) {
        if (uzs[i].kiekis > 0) {
            cout << left << uzs[i].kiekis << " " << setw(40) << men[uzs[i].pozicija].name << right << fixed << setprecision(2) << men[uzs[i].pozicija].price * uzs[i].kiekis << " Eur" << endl;
            mokesciai += (men[uzs[i].pozicija].price * uzs[i].kiekis) * 0.21;
            bendra += men[uzs[i].pozicija].price * uzs[i].kiekis;
        }
    }
    cout  << "Mokesciu suma " << setw(33) << right << fixed << setprecision(2) << mokesciai << " Eur" << endl;
    cout  << "Galutine suma " << setw(33) << right << fixed << setprecision(2) << bendra + mokesciai << " Eur" << endl;
}

int main()
{
    cout << "Laba diena!" << endl;
    iskvietimas();
    cout << "Jusu uzsakymas yra: " << endl;
    saskaita();
    cout << "Maistas jau salia! " << endl;
    ofstream  cekis;
    cekis.open("cekis.txt");
    cekis << saskaita << endl;
    cekis.close();
    return 0;
}
