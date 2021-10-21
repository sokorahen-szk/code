#include<iostream>

using namespace std;

int main() {
    int x, y, c = 0;
    int ans[3001][2];
    while(true) {
        cin >> x >> y;
        if (x < y) {
            ans[c][0] = x;
            ans[c][1] = y;
        } else {
            ans[c][0] = y;
            ans[c][1] = x;
        }
        if (x == 0 && y == 0) {
            break;
        }
        c++;
    }
    for (int i = 0; i < sizeof(ans) / sizeof(ans[0][0]); i++) {
        if (ans[i][0] == 0 && ans[i][1] == 0) {
            break;
        }
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
}