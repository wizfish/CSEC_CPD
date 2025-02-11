#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int total = 0, current = 0;
    for (char c : s) {
        int target = c - 'a';
        int clockwise = (target - current + 26) % 26;
        int counterclockwise = (current - target + 26) % 26;
        total += min(clockwise, counterclockwise);
        current = target;
    }
    cout << total << endl;
    return 0;
}
