#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
