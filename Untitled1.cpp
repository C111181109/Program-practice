#include <iostream>
using namespace std;

int main() {
    int num;
    
    // ?入三位?的整?
    cout << "??入一?三位?的整?：" << endl;
    cin >> num;

    // 提取百位?、十位?和?位?
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int ones = num % 10;

    // ?算翻?后的?果
    int reversedNum = ones * 100 + tens * 10 + hundreds;

    // ?出翻?后的?果
    cout << "翻?后的?果是：" << reversedNum << endl;

    return 0;
}

