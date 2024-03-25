#include<iostream>
using namespace std;

class employee {
    private:
        int a, b, c;
    public:
        int d, e;

    void setData(int a1, int b1, int c1);
    void getData();
};

void employee::setData(int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}

void employee::getData() {
    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;
    cout << "Value of c is " << c << endl;
    cout << "Value of d is " << d << endl;
    cout << "Value of e is " << e << endl;
}

int main() {
    employee Sourabh;
    Sourabh.d = 31;
    Sourabh.e = 28;
    Sourabh.setData(1, 2, 8); 
    Sourabh.getData(); 

    return 0;
}
