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
            if (number % i == 0 && i != number) { // 如果有除以i的餘數為0且i不等於number本身
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << number << " 是質數" << endl;
    } else {
        cout << number << " 不是質數" << endl;
    }

    return 0;
}
