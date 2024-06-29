#include <iostream>
using namespace std;

class Student {
    int id;  // data member

public:
    // Constructor
    Student(int n) : id(n) {
        cout << "Constructor" << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor" << endl;
    }

    // Copy constructor
    Student(const Student &s) : id(s.id) {
        cout << "Copy Constructor id=" << id << endl;
    }

    // Member function show
    void show() {
        cout << "id=" << id << endl;
    }
};

int main() {
    // Create Student object p1 using constructor
    Student p1(9903438);

    // Create Student object p2 using copy constructor
    Student p2(p1);

    // Call show member function
    p1.show();
    p2.show();

    return 0;
}

