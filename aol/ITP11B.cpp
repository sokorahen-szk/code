#include<iostream>
using namespace std;

int pown(int n, int e);

int main() {
    int n;
    cin >> n;
    cout << pown(n, 3) << endl;
}

int pown(int n, int e) {
    int c = 0;
    int ans = 1;
    while (c < e) {
        ans *= n;
        c++;
    }
    return ans;
}
