#include<iostream>
using namespace std;

// Define structure employee
struct employee {
    int eId;
    char favChar;
    float salary;
};

// Define union money
union money {
    int rice;
    float dollars;
    char car[20];
};

int main() {
    // Using structure employee
    struct employee harry;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout << "The value is " << harry.eId << endl;
    cout << "The value is " << harry.favChar << endl;
    cout << "The value is " << harry.salary << endl;

    // Using union money
    union money m1;
    m1.rice = 34;
    cout << m1.rice << endl;

    return 0;
}
