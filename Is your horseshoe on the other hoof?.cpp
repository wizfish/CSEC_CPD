#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    int a[4] = {s1, s2, s3, s4};
    int distinctCount = 0;
    for (int i = 0; i < 4; i++) {
        bool found = false;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            distinctCount++;
        }
    }
    cout << 4 - distinctCount << endl;
    return 0;
}
