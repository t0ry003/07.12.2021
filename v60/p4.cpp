#include "iostream"
#include "math.h"

using namespace std;

void radical(int a, int &x) {
    for (x = a; x > 0; x--)
        if ((int)sqrt(x) * (int)sqrt(x) == x)
            break;
}

int main() {
    int x, n;
    cin >> n;

    radical(n, x);
    if (n == x)
        cout << "DA";
    else
        cout << "NU";
}