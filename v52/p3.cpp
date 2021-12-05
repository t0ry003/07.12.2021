#include "fstream"
#include "iostream"

using namespace std;

ifstream f("./date.in");

bool mult(int n, int a[]) {
    bool sem = true;
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (a[i] == a[j]) {
                sem = false;
                goto finish;
            }
finish:
    return sem;  
}

int main() {
    int n = 1, i, a[101];
    while (f >> a[n])
        n++;
    for (i = 1; i <= n; i++)
        if (mult(i, a) == false)
            break;
    cout << i-1;
}