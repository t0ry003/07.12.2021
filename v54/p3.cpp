#include "iostream"

using namespace std;

void inv(int a, int &b) {
    b = 0;
    while (a != 0) {
        int cif = a % 10;
        b = b * 10 + cif;
        a /= 10;
    }
}

int main() {
    int n, b;
    cin >> n;

    // palMax
    int palMax;
    for (palMax = n; palMax > 10; palMax--) {
        inv(palMax, b);
        if (palMax == b)
            break;
    }

    cout << palMax;
}