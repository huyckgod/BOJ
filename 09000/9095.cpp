#include<iostream>
using namespace std;
int main() {
    int d[11];
    int n = 11;
    int a;
    d[1] = 1;
    d[2] = 2;
    d[3] = 4;
    for (int i = 4; i < n; i++)
        d[i] = (d[i - 1] + d[i - 2]+ d[i - 3]);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        cout << d[a] << endl;
    }
}