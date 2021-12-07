#include "iostream"

using namespace std;

bool verif(int x) {
    bool sem = false;
    int c = 0;

    while (x) {
        int cif = x % 10;
        if (cif % 2 != 0)
            c++;
        else
            c = 0;
        if (c == 3) {
            sem = true;
            goto finish;
        }
        x /= 10;
    }

finish:
    return sem;
}

int main() {
    int n;
    cin >> n;
    // ? n este de 6 cifre
    // ! n/1000 e numarul fara ultimele 3 cifre
    if (verif(n / 1000) == 1)
        cout << "Da";
    else
        cout << "Nu";
}