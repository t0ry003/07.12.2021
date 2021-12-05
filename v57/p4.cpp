#include "iostream"

using namespace std;

int multiplu(int a, int k) {
    // mult lui k mai mare ca a
    int mult = a + 1;
    while (mult) {
        if (mult % k == 0)
            break;
        mult++;
    }
    return mult;
}

int main() {
    int x, y, z;
    bool sem = false;
    cin >> x >> y >> z;

    if (multiplu(x - 1, z) <= y)
        sem = true;

    if (sem == true)
        cout << "DA";
    else
        cout << "NU";
}