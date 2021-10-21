#include<iostream>

using namespace std;

char tolower(char c) { return (c + 0x20); }

int main() {
    int n, k;
    cin >> n >> k;
    char s[n];
    cin >> s;
    char c;
    for (int i = 0; i < sizeof(s)/sizeof(s[0]); i++) {
        if (i + 1 == k) {
            c = tolower(s[i]);
        } else {
            c = s[i];
        }
        cout << c;
    }
    cout << endl;
}