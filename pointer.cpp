#include<iostream>
using namespace std;
int main()
{
    int a =3;
    int* b = &a;
    // address of operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    //deference of operator
    cout<<"The value at address of b is "<<*b<<endl;

    //pointer to pointer
    int** c = &b;
    cout<<"the address of c"<<&b<<endl;
    cout<<"the address of c "<<c<<endl;
    cout<<"the value at c of addresss "<<*c<<endl;
    cout<<"the value at c "<<**c<<endl;


    return 0;

}