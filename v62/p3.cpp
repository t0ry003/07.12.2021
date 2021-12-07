#include "iostream"

using namespace std;

void fibo(int n, int v[]) {
    int nr_0 = 0, nr_1 = 1, nr_2;
    v[1] = 1;
    for (int i = 2; i <= n; i++) {
        nr_2 = nr_1 + nr_0;
        nr_0 = nr_1;
        nr_1 = nr_2;
        v[i] = nr_2;
    }
}

int main() {
    int n, v[101];
    cin >> n;
    fibo(n, v);
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
}