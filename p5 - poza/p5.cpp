#include "iostream"

using namespace std;

void produs(int n, int &p) {
    int nrPare[101], k = 1, nrPareDistincte[101], l = 1;
    while (n != 0) {
        int cif = n % 10;
        if (cif % 2 == 0) {
            nrPare[k] = cif;
            k++;
        }
        n /= 10;
    }
    for (int i = 1; i < k; i++) {
        bool verif = false;
        for (int j = 1; j < l; j++)
            if (nrPare[i] == nrPareDistincte[j])
                verif = true;
        if (verif == false) {
            nrPareDistincte[l] = nrPare[i];
            l++;
        }
    }
    for (int i = 1; i < l; i++)
        p *= nrPareDistincte[i];
}

int main() {
    int n = 122325, p = 1;
    produs(n, p);
    cout << p;
}