#include <iostream>
using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;
    int maxRoll = max(Y, W);
    int favorableOutcomes = 7 - maxRoll;
    int totalOutcomes = 6;
    
    int gcd = 1;
    for (int i = 1; i <= favorableOutcomes && i <= totalOutcomes; i++) {
        if (favorableOutcomes % i == 0 && totalOutcomes % i == 0) {
            gcd = i;
        }
    }
    
    cout << favorableOutcomes / gcd << "/" << totalOutcomes / gcd << endl;
    return 0;
}
