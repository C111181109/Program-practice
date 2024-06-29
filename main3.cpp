#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string _name;
    char _sex; //'F':girl 'M':boy

public:
    Person(string name, char sex) {
        _name = name;
        _sex = sex;
    }

    void sayHi() {
        cout << "Hi " << _name << ",";
    }

    void sayGood() {
        if (_sex == 'F') {
            cout << " 妳好" << endl;
        } else if (_sex == 'M') {
            cout << " 你好" << endl;
        }
    }
};

int main() {
    int n;
    cout << "請輸入人數：";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string name;
        char sex;
        cin >> name >> sex;

        Person person(name, sex);
        person.sayHi();
        person.sayGood();
    }

    return 0;
}



