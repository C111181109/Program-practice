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
            if (number % i == 0 && i != number) { // �p�G�����Hi���l�Ƭ�0�Bi������number����
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
