#include<iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int t[3] = {a, b, c};
    int tmp = 0;
    for (int i = 0; i < sizeof(t)/sizeof(t[0]); i++) {
        for (int j = i; j < sizeof(t)/sizeof(t[0]); j++) {
            if (j == i) continue;
            if (t[i] > t[j]) {
                tmp = t[i];
                t[i] = t[j];
                t[j] = tmp;
            }
        }
    }
    cout << t[0] << " " << t[1] << " " << t[2] << endl;
}