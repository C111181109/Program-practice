#include <iostream>

using namespace std;

int main() {
    int number;
    bool isPrime = true;

    cout << "�п�J�@�ӥ���ơG";
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
        cout << number << " �O���" << endl;
    } else {
        cout << number << " ���O���" << endl;
    }

    return 0;
}


