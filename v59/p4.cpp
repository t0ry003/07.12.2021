#include "iostream"

using namespace std;

void divizor(int a, int &d) {
    d = 0;
    for (int i = 2; i <= a / 2; i++)
        if (a % i == 0) {
            d = i;
            break;
        }
}

int main() {
    int x, d;
    cin >> x;

    divizor(x, d);
    if (d == 0)
        cout << "DA";
    else
        cout << "NU";
}