#include <iostream>

using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cout << "請輸入一個正整數：";
    cin >> number;

    if (number <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
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


