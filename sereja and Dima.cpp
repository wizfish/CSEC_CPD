#include <iostream>
using namespace std;

int main() {
    int n, sereja = 0, dima = 0, left = 0, right;
    cin >> n;
    right = n - 1;
    int cards[n];
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }
    for (int turn = 0; left <= right; turn++) {
        if (cards[left] > cards[right]) {
            if (turn % 2 == 0) sereja += cards[left];
            else dima += cards[left];
            left++;
        } else {
            if (turn % 2 == 0) sereja += cards[right];
            else dima += cards[right];
            right--;
        }
    }
    cout << sereja << " " << dima << endl;
    return 0;
}
