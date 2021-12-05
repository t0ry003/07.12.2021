#include "fstream"
#include "iostream"

using namespace std;

void cifre(int a, int &b) {
    int c[10];
    b = 0;
    for (int i = 1; i <= 9; i++)
        c[i] = 0;
    while (a) {
        c[a % 10] = 1;
        a = a / 10;
    }
    for (int i = 1; i <= 9; i++)
        if (c[i] == 1)
            b = b * 10 + i;
}

int main() {
    ifstream f("./date.in");
    bool sem = false;
    int a, b, n;
    f >> n;
    for (int i = 1; i <= 9; i++) {
        f >> a;
        cifre(a, b);
        if (a == b) {
            cout << a << " ";
            sem = true;
        }
    }
    if (sem == false)
        cout << 0;
}