#include <iostream>
using namespace std;


int g(int n) {
    if (n == 0) {
        return 0;
    } else {
        return 1 + (n - 1) % 9;
    }
}

int main() {
    int n;

    while (cin >> n) {

        cout << g(n) << endl;
    }

    return 0;
}

