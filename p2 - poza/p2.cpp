#include "iostream"

using namespace std;

void paritate(int n, int &nr) {
    bool par = false;

    if (n % 2 == 0)
        par = true;

    if (par == true) {
        for (int d = 2; d <= n; d += 2)
            if (n % d == 0)
                nr++;
    } else {
        for (int d = 1; d <= n; d += 2)
            if (n % d == 0)
                nr++;
    }
}

int main() {
    int nr = 0;
    paritate(20, nr);
    cout << nr;
}