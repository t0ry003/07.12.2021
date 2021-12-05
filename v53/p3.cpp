#include "iostream"

using namespace std;

int cmmdc(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n, nr = 0;
    cin >> n;
    for (int i = 2; i <= n - 1; i++)
        for (int j = i + 1; j <= n; j++)
            if (cmmdc(i, j) == 1)
                nr++;
    cout << nr;
}