#include "iostream"
#include "math.h"

using namespace std;

void patrate(int x, int y) {
    if (y < x)
        swap(x, y);

    int sumNum[y], k = 1, s = 0, j;
    for (j = x; j <= y; j++) {
        if (sqrt(j) == floor(sqrt(j))) {
            sumNum[k] = j;
            k++;
            s += j; // calculam aici suma pentru a putea verifica daca e nula
        }
    }

    if (s != 0) {
        for (int i = 1; i < k; i++) {
            cout << sumNum[i];
            if (i < k - 1)
                cout << "+";
        }
        cout << "=" << s;
    } else
        cout << "nu exista";
}

int main() { patrate(10, 50); }