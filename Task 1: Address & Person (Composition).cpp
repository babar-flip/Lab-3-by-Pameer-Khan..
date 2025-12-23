#include <iostream>
using namespace std;

class Address {
private:
    string street, house, city, code;
public:
    void setAddress(string s, string h, string c, string co) {
        street = s;
        house = h;
        city = c;
        code = co;
    }

    void getAddress() {
        cout << "Street: " << street << endl;
        cout << "House: " << house << endl;
        cout << "City: " << city << endl;
        cout << "Code: " << code << endl;
    }
};

class Person {
private:
    Address addr;
public:
    void setPerson(Address a) {
        addr = a;
    }

    void display() {
        addr.getAddress();
    }
};

int main() {
    Address a;
    a.setAddress("Main Road", "12A", "Lahore", "54000");

    Person p;
    p.setPerson(a);
    p.display();

    return 0;
}
