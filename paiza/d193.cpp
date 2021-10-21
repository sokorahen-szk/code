#include<iostream>
using namespace std;

int main() {
    int n, m, c = 0;
    cin >> n;
    cin >> m;
    while (n <= m) {
        m = m - n;
        c++;
    }
    cout << c << endl;
    cout << m << endl;
}