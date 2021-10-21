#include<iostream>

using namespace std;

int main() {
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    if ( (0 < x + r &&  0 < y + r) && (W >= x + r && H >= y + r) ) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}