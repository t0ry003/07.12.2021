#include "iostream"

using namespace std;

void divizor(int a, int &d) {
    for (d = a - 1; d > 0; d--)
        if (a % d == 0)
            break;
}

int main() {
    int x, d;
    bool sem = false;
    cin >> x;

    divizor(x, d);
    if (d == 1)
        sem = true;

    if (sem == true)
        cout << "DA";
    else
        cout << "NU";
}