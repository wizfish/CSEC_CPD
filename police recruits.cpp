#include <iostream>
using namespace std;

int main() {
    int n, untreated = 0, officers = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int event;
        cin >> event;
        if (event == -1) {
            if (officers > 0) {
                officers--;
            } else {
                untreated++;
            }
        } else {
            officers += event;
        }
    }
    cout << untreated << endl;
    return 0;
}
