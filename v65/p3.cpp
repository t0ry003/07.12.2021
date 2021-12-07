#include "iostream"

using namespace std;

int sfx(int x) {
    int sem = 0;
    if (x % 10 < (x / 10) % 10 && (x / 10) % 10 < (x / 100) % 10)
        return 1;
    return 0;
}

int main() {
    int n;
    cin >> n;

    if (sfx(n) == 1 && sfx(n / 1000) == 1)
        cout << "Da";
    else
        cout << "Nu";
}