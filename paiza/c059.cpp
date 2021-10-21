#include <iostream>
#include <string>

using namespace std;
string binary(int n, int bit) {
    int a;
    string s, res = "";
    while (true) {
        a = (int) n/2;
        s += n%2 == 0 ? "0" : "1";
        if (a == 0) break;
        n = a;
    }
    for (int i = 0; bit - s.length(); i++) {
        s += "0";
    }
    for (int i = s.length(); 0 <= i; i--) {
        res += s[i];
    }
    return res;
}

int main() {
    int n, t, ans = 0;
    cin >> n;
    string cs;
    for  (int i = 0; i < n;  i++) {
        cin >> cs;
        t = stoi(cs, 0, 2);
        ans = ans^t;
    }
    cout << binary(ans, 4) << endl;
}