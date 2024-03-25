#include<iostream>
using namespace std;

class binary {
private:
    string s;
    void chk_bin(); // Declaration of private member function
public:
    void read();
    void ones_complement();
    void display();
};

// Read function
void binary::read() {
    cout << "Enter a binary number: ";
    cin >> s;
}

// Check binary function
void binary::chk_bin() {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '0') {
            s.at(i) = '1';    
        } else {
            s.at(i) = '0';
        }
    }
}

// Ones complement function
void binary::ones_complement() {
    chk_bin(); // Call private member function to perform the check
}

// Display function
void binary::display() {
    cout << "Ones complement: " << s << endl;
}

int main() {
    binary bin;
    bin.read();
    bin.ones_complement();
    bin.display();
    return 0;
}
 
