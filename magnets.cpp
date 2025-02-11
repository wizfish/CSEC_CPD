#include <iostream>
using namespace std;

int main() {
    int n, groups = 1;
    cin >> n;
    string prev, curr;
    cin >> prev;
    for (int i = 1; i < n; i++) {
        cin >> curr;
        if (curr != prev) {
            groups++;
            prev = curr;
        }
    }
    cout << groups << endl;
    return 0;
}
