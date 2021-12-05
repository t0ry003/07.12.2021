#include "iostream"

using namespace std;

int prim(int n) {
    int prim = 0;
    for (int d = 2; d <= n / 2; d++)
        if (n % d == 0)
            prim++;

    if (prim == 0)
        return 1;
    else
        return 0;
}

void divPrimMax(int n, int &p) {
    p = 0;
    for (int k = 1; k <= n / 2; k++)
        if (n % k == 0 && prim(k) == 1)
            if (k > p)
                p = k;
}

int main() {
    int n = 2000, p;
    divPrimMax(n, p);
    cout << p;
}