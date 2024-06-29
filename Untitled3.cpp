#include <iostream>

using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cin >> number;

    if (number <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= number; i++) {
            if (number % i == 0 && i != number) { // 狦Τ埃i緇计0iぃ单numberセō
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << number << " 琌借计" << endl;
    } else {
        cout << number << " ぃ琌借计" << endl;
    }

    return 0;
}
