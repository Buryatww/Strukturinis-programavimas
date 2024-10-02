#include <iostream>
#include <iomanip>
using namespace std;
float GBP;
float USD;
float INR;
float EUR;
int pas1;
int pas2;
float kiekis;
void pradzia() {
    cout<<"Pasirinkite norima veiksma "<<endl;
    cout<<"1.Pirkti valiuta "<<endl;
    cout<<"2.Parduoti valiuta "<<endl;
    cout<<"3.Palyginti valiutas "<<endl;
    cout<<"0.Uzbaigti "<<endl;
    cin>>pas1;
}
void pirkti() {
    cout<<"Kuria valiuta pirksit? "<<endl;
    cout<<"1.GBP "<<endl;
    cout<<"2.USD "<<endl;
    cout<<"3.INR "<<endl;
    cout<<"4.Grizti"<<endl;
    cin>>pas2;
    switch(pas2) {
        case 1:
            cout<<"Jus pasirinkote GBP, iveskite kiek EUR norit parduoti "<<endl;
        GBP= 0.9060;
            cin>>kiekis;
            cout<<"Jus gausit "<<setprecision( 2 )<<(GBP*kiekis)<<" GBP"<<endl;
        break;
        case 2:
            cout<<"Jus pasirinkote USD, iveskite kiek EUR norit parduoti "<<endl;
        USD=1.1309;
        cin>>kiekis;
        cout<<"Jus gausit "<<setprecision( 2 )<< USD*kiekis <<" USD"<<endl;
        break;
        case 3:
            cout<<"Jus pasirinkote INR, iveskite kiek EUR norit parduoti "<<endl;
        INR=92.8334;
        cin>>kiekis;
        cout<<"Jus gausit "<< setprecision( 2 )<<INR*kiekis <<" INR"<<endl;
        break;
        case 4:
            pradzia();
        break;
        default:
            cout<<"Tokio pasirinkimo nera"<<endl;
    }
}
void parduoti() {
    cout<<"Kuria valiuta parduosit? "<<endl;
    cout<<"1.GBP "<<endl;
    cout<<"2.USD "<<endl;
    cout<<"3.INR "<<endl;
    cout<<"4.Grizti"<<endl;
    cin>>pas2;
    switch(pas2) {
        case 1:
            cout<<"Jus pasirinkote GBP, iveskite kiek GBP norit parduoti "<<endl;
        GBP= 0.8450;
        cin>>kiekis;
        cout<<"Jus gausit "<<setprecision( 2 )<< kiekis/GBP <<" EUR"<<endl;
        break;
        case 2:
            cout<<"Jus pasirinkote USD, iveskite kiek USD norit parduoti "<<endl;
        USD=1.0547;
        cin>>kiekis;
        cout<<"Jus gausit "<< setprecision( 2 )<<kiekis/USD <<" EUR"<<endl;
        break;
        case 3:
            cout<<"Jus pasirinkote INR, iveskite kiek INR norit parduoti "<<endl;
        INR=85.2614;
        cin>>kiekis;
        cout<<"Jus gausit "<<setprecision( 2 )<< kiekis/INR <<" EUR"<<endl;
        break;
        case 4:
            pradzia();
        break;
        default:
            cout<<"Tokio pasirinkimo nera"<<endl;
    }
}
void palyginti() {
    GBP=0.8593;
    USD=1.0713;
    INR=88.8260;
    cout<<"Pasirinkite kurias valiutas palyginti "<<endl;
    cout<<"1.GBP su EUR"<<endl;
    cout<<"2.USD su EUR"<<endl;
    cout<<"3.INR su EUR"<<endl;
    cout<<"4.GBP su USD"<<endl;
    cout<<"5.GBP su INR"<<endl;
    cout<<"6.USD su GBP"<<endl;
    cout<<"7.USD su INR"<<endl;
    cout<<"8.INR su GBP"<<endl;
    cout<<"9.INR su USD"<<endl;
    cout<<"0.Kad grizti"<<endl;
    cin>>pas2;
    switch (pas2) {
        case 1:
            cout<<"GBP lygus"<<setprecision( 2)<<1/GBP<<" EUR"<<endl;
        break;
        case 2:
            cout<<"USD lygus"<<setprecision( 2 )<<1/USD<<" EUR"<<endl;
        break;
        case 3:
            cout<<"INR lygus"<<setprecision( 2 )<<1/INR<<" EUR"<<endl;
        break;
        case 4:
            cout<<"GBP lygus"<<setprecision( 2 )<< USD/GBP<<" USD"<<endl;
        break;
        case 5:
            cout<<"GBP lygus"<<setprecision( 2 )<< GBP/INR<<" INR"<<endl;
        break;
        case 6:
            cout<<"USD lygus"<<setprecision( 2 )<< GBP/USD<<" GBP"<<endl;
        break;
        case 7:
            cout<<"USD lygus"<< setprecision( 2)<<INR/USD<<" INR"<<endl;
        break;
        case 8:
            cout<<"INR lygus"<< setprecision( 2 )<<GBP/INR<<" GBP"<<endl;
        break;
        case 9:
            cout<<"INR lygus"<< setprecision( 2 )<<USD/INR<<" USD"<<endl;
        break;
        case 0:
            pradzia();
        break;
        default:
            cout<<"Tokio pasirinkimo nera"<<endl;

    }
    }

int main() {
pradzia();
    do {
        switch (pas1){
            case 1:
                pirkti();
            break;
            case 2:
                parduoti();
            break;
            case 3:
                palyginti();
            break;
            case 0:
                cout<<"Jus atsijunget ";
            break;
            default:
                cout<<"Nera tokio pasirinkimo "<<endl;
        }
    }
    while(pas1!=0&&pas1<4);
    return 0;
}
