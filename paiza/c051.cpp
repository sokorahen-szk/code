#include<iostream>
#include<array>
using namespace std;
int main() {
    int a, b, c ,d;
    cin >> a >> b >> c >> d;
    array<int,4> ary = {a, b, c, d};
    sort(ary.begin(), ary.end());

    int ans[2];
    for (int i = 0; i < 2; i++) {
        ans[i] = 0;
    }
    int tumi = 10;
    int cnt = 1;

    for (int i = ary.size(); 0 <= i; i--) {
        ans[i % 2] += ary[i] * tumi;
        if (cnt++%3 == 0) {
            tumi = tumi/10;
        }
    }

    cout << ans[0] + ans[1] << endl;
}