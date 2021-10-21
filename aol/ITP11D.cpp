#include<iostream>
using namespace std;
int main () {
    int S;
    char buf[256];
    cin >> S;
    sprintf(buf, "%02d:%02d:%02d", S/3600, (S/60)%60, S%60);
    cout << buf << endl;
}