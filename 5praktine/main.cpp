#include <iostream>
using namespace std;
int ei, st, x = 0, pas, pas2, kiek;
struct kontaktai {
    int id;
    string vardas;
    string pavarde;
    string numeris;
};
void menu() {
    cout<< "Pasirinkite norima veiksma " << endl;
    cout<< "Iveskite 1 kad dirbti su masyvu" << endl;
    cout<< "Iveskite 2 kad dirbti su struktura" << endl;
    cout<< "Iveskite 0 kad sustabdyt programa " << endl;
    cin >> pas;
}

int main() {
    do {
        menu();

        switch(pas) {

            case 1: {
                cout << "Iveskite kiek eiluciu ir stulpeliu bus masyve "<<endl;
                cin>>ei>>st;
                int **masiv = new int* [ei];
                for(int i=0;i<ei;i++) {
                    masiv[i] = new int[st];
                }

                cout << "Iveskite reiksmes"<<endl;
                for(int i=0;i<ei;i++) {
                    for(int j=0;j<st;j++) {
                        cin>>masiv[i][j];
                    }
                }

                for(int i=0;i<ei;i++) {
                    for(int j=0;j<st;j++) {
                        cout<<masiv[i][j]<<" ";
                    }
                    cout<<endl;
                }

                for(int i=0;i<ei;i++) {
                    for(int j=0;j<st;j++) {
                        x+=masiv[i][j];
                    }
                    cout<<i+1 <<" eilutes visu reiksmiu suma = "<<x<<endl;
                    x=0;
                }

                for(int i=0;i<st;i++) {
                    for(int j=0;j<ei;j++) {
                        x+=masiv[j][i];
                    }
                    cout<<i+1 <<" stulpelio visu reiksmiu suma = "<<x<<endl;
                    x=0;
                }

                for(int i=0;i<ei;i++) {
                    for(int j=0;j<st;j++) {
                        if (masiv[i][j] > x) {
                            x = masiv[i][j];
                        }
                    }
                }
                cout<< "Didziausias elementas masyve lygus " << x << endl;

                for (int i=0;i<ei;i++) {
                    delete[] masiv[i];
                }
                delete[] masiv;
                cout<< endl;
                cout<< endl;
                break;
            }

            case 2: {
                kontaktai* kt;
                kt = new kontaktai[50];
                cout<< "Irasykite kiek kontaktu pridesit " << endl;
                cin >> kiek;

                do {
                    cout<< "Pasirinkite norima veiksma " << endl;
                    cout<< "1-uzpildyti kontaktus " << endl;
                    cout<< "2-parodyti kontaktus " << endl;
                    cout<< "3-istrinti/atnaujinti " << endl;
                    cout<< "0-grizti " << endl;
                    cin>>pas2;

                    switch (pas2) {
                        case 1: {
                            for (int i = 0; i < kiek; i++) {
                                cout<< "Iveskite id " << endl;
                                cin >> kt[i].id;
                                cout<< "Iveskite varda " << endl;
                                cin >> kt[i].vardas;
                                cout<< "Iveskite pavarde " << endl;
                                cin >> kt[i].pavarde;
                                cout<< "Iveskite numeri " << endl;
                                cin >> kt[i].numeris;
                            }
                            break;
                        }

                        case 2: {
                            for (int i = 0; i < kiek; i++) {
                                cout << kt[i].id << " " << kt[i].vardas << " " << kt[i].pavarde << " " << kt[i].numeris << endl;
                            }
                            break;
                        }

                        case 3: {
                            cout << "Norit atnaujinti(1) ar pasalinti(2) kontakta? " << endl;
                            cin >> pas;
                            if (pas == 1) {
                                cout << "Irasykite id " << endl;
                                cin >> ei;
                                for (int i = 0; i < kiek; i++) {
                                    if (kt[i].id == ei) {
                                        cout<< "Iveskite nauja varda " << endl;
                                        cin >> kt[i].vardas;
                                        cout<< "Iveskite nauja pavarde " << endl;
                                        cin >> kt[i].pavarde;
                                        cout<< "Iveskite nauja numeri " << endl;
                                        cin >> kt[i].numeris;
                                    }
                                }
                            }
                            else if (pas == 2) {
                                cout << "Irasykite id " << endl;
                                cin >> ei;
                                for (int i = 0; i < kiek; i++) {
                                    if (kt[i].id == ei) {
                                         kt[i].vardas = "";
                                         kt[i].pavarde = "";
                                         kt[i].numeris = "";
                                    }
                                }
                            }
                        }

                        default : "...";
                    }
                } while (pas2 != 0);

                delete[] kt;
                break;
            }

            case 0: cout << "Iki!" << endl;
            break;

            default: cout<< "Tokio pasirinkimo nera " << endl;
        }
    }
        while(pas != 0);

        return 0;
    }
