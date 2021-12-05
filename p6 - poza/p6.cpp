#include "iostream"

using namespace std;

int prim(int x) {
    int bPrim = false;
    if (x != 1 && x != 0) {
        for (int d = 2; d <= x / 2; d++)
            if (x % d == 0)
                bPrim = true;
    } else
        bPrim = true;
    return !bPrim;
}

int interval(int n) {
    while (n) {
        n++;
        if (prim(n) == 1)
            goto finish;
    }
finish:
    return n + 1;
}

int main() { cout << interval(8); }