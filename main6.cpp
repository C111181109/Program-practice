#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int a;
    cin >> a;
    
    if (a % 4 == 0 && a % 100 != 0)
        cout << "a leap year" << endl;
    else if (a % 400 == 0)
        cout << "a leap year" << endl;
    else if (a % 100 == 0)
        cout << "a normal year" << endl;
    
    return 0;
}

