#include <iostream>
using namespace std;

int main() {
    int num;
    
    // ?�J�T��?����?
    cout << "??�J�@?�T��?����?�G" << endl;
    cin >> num;

    // �����ʦ�?�B�Q��?�M?��?
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int ones = num % 10;

    // ?��½?�Z��?�G
    int reversedNum = ones * 100 + tens * 10 + hundreds;

    // ?�X½?�Z��?�G
    cout << "½?�Z��?�G�O�G" << reversedNum << endl;

    return 0;
}

