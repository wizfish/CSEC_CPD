#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int position = 1;
    for (char instruction : t) {
        if (position <= s.size() && s[position - 1] == instruction) {
            position++;
        }
    }
    cout << position << endl;
    return 0;
}
