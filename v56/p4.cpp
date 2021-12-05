#include "iostream"

using namespace std;

bool prim(int x) {
    bool sem = true;
    if (x != 0 && x != 1) {
        for (int d = 2; d <= x / 2; d++)
            if (x % d == 0) {
                sem = false;
                break;
            }
    } else
        sem = false;
    return sem;
}

void numar(int x, int &nrp) {
    nrp = 0;
    for (int i = 1; i < x; i++)
        if (prim(i) == 1) {
            nrp++;
        }
}

int main() {
    int a, b, nrp;
    int sem = 0;
    cin >> a >> b;
    if (a > b)
        swap(a, b);

    numar(a, nrp);
    int nrp_a = nrp;

    numar(b, nrp);
    int nrp_b = nrp;

    if (nrp_b - nrp_a >= 1)
        sem = 1;

    if (sem == 1)
        cout << "DA";
    else
        cout << "NU";
}