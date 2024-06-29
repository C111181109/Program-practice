#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "叫块计: ";
    cin >> n;

    if (n < 0) {
        cout << "叫块獶璽计" << endl;
        return 1;
    }

    int fn_2 = 0, fn_1 = 1, fn = 0;

    if (n == 0) {
        cout << "ぃ " << n << " 程禣ん计琌: " << fn_2 << endl;
        return 0;
    }

    if (n == 1) {
        cout << "ぃ " << n << " 程禣ん计琌: " << fn_1 << endl;
        return 0;
    }

    while (true) {
        fn = fn_1 + fn_2;
        if (fn > n) break;
        fn_2 = fn_1;
        fn_1 = fn;
    }

    cout << "ぃ " << n << " 程禣ん计琌: " << fn_1 << endl;
    return 0;
}

