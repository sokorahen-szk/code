#include <iostream>
#include <string>

using namespace std;
int main() {
    string s;
    cin >> s;
    int yy, mm;
    yy = std::stol(s.substr(0, 2));
    mm = std::stol(s.substr(2, 2));
    int p = 0;

    if (1 <= yy && yy <= 99) {
        if (1 <= mm && mm <= 12) {
            p += 1;
        }
    }
    if (1 <= yy && yy <= 12) {
        if (1 <= mm && mm <= 99) {
            p += 2;
        }
    }
    switch (p) {
        case 1:
            cout << "YYMM" <<endl;
            break;
        case 2:
            cout << "MMYY" <<endl;
            break;
        case 3:
            cout << "AMBIGUOUS" <<endl;
            break;
        default:
            cout << "NA" <<endl;
    }
}