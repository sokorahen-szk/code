#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string str[n];
    string ans;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            ans += str[i] + ",";
        } else {
            ans += str[i] + ".";
        }
    }
    cout << "Hello " << ans << endl;
}