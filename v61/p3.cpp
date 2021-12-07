#include "iostream"

using namespace std;

void cifra(float x, int &y) { y = (int)x % 10; }

int main() {
    float med1, med2;
    int y;
    cin >> med1 >> med2;

    cifra(med1, y);
    med1 = y;

    cifra(med2, y);
    med2 = y;

    if (med1 == med2)
        cout << "Da";
    else
        cout << "Nu";
}
