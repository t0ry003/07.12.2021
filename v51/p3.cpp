#include "iostream"
#include "math.h"

using namespace std;

int dist2(int xa, int ya, int xb, int yb) {
    int d = (xa - xb) * (xa - xb) + (ya - yb) * (ya - yb);
    return d;
}

int main() {
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;

    if (dist2(x1, y1, x2, y2) == dist2(x2, y2, x3, y3) &&
        dist2(x3, y3, x4, y4) == dist2(x4, y4, x1, y1))
        cout << "Da";
}
