#include <iostream>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h; 
    int totalWidth = 0; 
    for (int i = 0; i < n; ++i) {
        int ai;
        cin >> ai;
        if (ai > h) {
            totalWidth += 2;   
                 } else {
            totalWidth += 1;
        }
    }

    cout << totalWidth << endl; 
    return 0;
}
