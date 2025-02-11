#include <iostream>
using namespace std;

int main() {
    string username;
    cin >> username;
    bool char_seen[26] = {false};
    int distinct_count = 0;
    for (char c : username) {
        if (!char_seen[c - 'a']) {
            char_seen[c - 'a'] = true;
            distinct_count++;
        }
    }
    if (distinct_count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
