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
            cout << "©p¦n" << endl;
        } else if (_sex == 'M') {
            cout << "§A¦n" << endl;
        }
    }
};

int main() {
    int n;
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
