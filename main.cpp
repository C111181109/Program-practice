#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "�п�J�@�ӼƦr: ";
    cin >> n;

    if (n < 0) {
        cout << "�п�J�@�ӫD�t�Ʀr�C" << endl;
        return 1;
    }

    int fn_2 = 0, fn_1 = 1, fn = 0;

    if (n == 0) {
        cout << "���j�� " << n << " ���̤j�O��ƬO: " << fn_2 << endl;
        return 0;
    }

    if (n == 1) {
        cout << "���j�� " << n << " ���̤j�O��ƬO: " << fn_1 << endl;
        return 0;
    }

    while (true) {
        fn = fn_1 + fn_2;
        if (fn > n) break;
        fn_2 = fn_1;
        fn_1 = fn;
    }

    cout << "���j�� " << n << " ���̤j�O��ƬO: " << fn_1 << endl;
    return 0;
}

