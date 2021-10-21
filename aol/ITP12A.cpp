#include<iostream>
using namespace std;
int main() {
    int a, b;
    string ans;
    cin >> a >> b;
    if (a > b) {
        ans = "a > b";
    } else if (a < b) {
        ans = "a < b";
    } else {
        ans = "a == b";
    }
    cout << ans << endl;
}