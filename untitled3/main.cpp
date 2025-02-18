#include <iostream>
using namespace std;
int maks = -9999, myn = 9999, elem, neig , sand = 1, rikiavimas ;
int main() {
    cin >> elem;
    int masyf [elem];
    for (int i = 0; i < elem; i++ ) {
        cin >> masyf[i];
        if (masyf[i] < 0) {
            neig += masyf[i];
        }
    }
    for (int i = 0; i < elem; i++ ) {
        if ( maks< masyf[i]) {
            maks = masyf [i];
        }
    }
    for (int i = 0; i < elem; i++ ) {
        if (myn > masyf[i]) {
            myn = masyf[i];
        }
    }
    for (int i = 0; i < elem; i++) {
        if (masyf[i] != myn && masyf[i] != maks) {
            sand *= masyf[i];
        }
    }
    for (int i = 0; i < elem - 1; i++ ) {
        for (int j = i + 1; j < elem; j++) {
            if(masyf[i] > masyf[j]) {
                rikiavimas = masyf[i];
                masyf[i] = masyf[j];
                masyf[j] = rikiavimas;
            }
        }
    }
    for (int i = 0; i < elem; i++ ) {
        cout << masyf[i] << endl;
    }
    cout << "neigiamu skaiciu suma yra " << neig << endl;
    cout << "Didziausias elementas yra " << maks << " Maziausias yra " << myn << endl;
    cout <<"Sandauga elementu, esanciu tarp didziausio ir maziausio elemento. " << sand << endl ;
    return 0;
}
