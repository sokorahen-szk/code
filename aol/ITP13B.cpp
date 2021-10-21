#include<iostream>
using namespace std;
int main() {
    int x, c = 0;
    int ans[10001];
    while (true) {
        cin >> x;
        ans[c++] = x;
        if (x == 0) {
            break;
        }
    }
    c = 1;
    for (int i = 0; i < sizeof(ans) / sizeof(ans[0]); i++) {
        if (ans[i] == 0) {
            break;
        }
        cout << "Case " << c++ << ": " << ans[i] << endl;
    }
}