#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// void pirma() {
//     cout<<"Kirill "<<endl;
//     cout<<"Ieskau save "<<endl;
// }
// void antra1() {
//     cout<<"Vilniaus kolegija"<<endl;
// }
// void antra2() {
//     cout<<"Elektronikos ir informatikos fakultetas"<<endl;
// }
// int q;
// void random() {
//     srand(time(0));
//     int randomNum=rand();
//     cout<<randomNum<<endl;
// }
// int main()
// {
//   // pirma();
//   //   pirma();
//   //   antra1();
//   //   antra2();
// for(q=0;q<10; q++) {
// random();
// }
//     return 0;
// }
// int a,b;
// void suma() {
//     cout<<"SUma lygu"<< a + b<<endl;
// }
// void skirtumas() {
//     cout<<"Skirtumas lygus"<< a-b<<endl;
// }
// void dalyba() {
//     cout<<"Dalyba lygu "<<a/b<<endl;
// }
// void sandauga() {
//     cout<<"Sandauga lygi"<< a*b<<endl;
// }
// int main() {
//    cin>>a>>b;
//     suma();
//     skirtumas();
//     dalyba();
//     sandauga();
//     return 0;
// }
int a;
int b;
void palyginimas() {
    if (a>b) {
        cout<<"pirmas didesnis uz antra"<<endl;
    }
    else if (a<b) {
        cout<<"antras didesnis uz pirma"<<endl;
    }
    else if(a=b) {
        cout<<"skaiciai lygus"<<endl;
    }
}
int main() {
int q;
    for(q=1;q<=3;++q) {
        cin>>a>>b;
        palyginimas();
    }
}