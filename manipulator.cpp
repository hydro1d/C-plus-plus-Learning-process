//setw(i will put space value)
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a = 4,b=73,c=1299;
    cout<<"The value of a without setw "<<a<<endl;
    cout<<"the value of b without setw "<<b<<endl;
    cout<<"the value of c without setw "<<c<<endl;

    cout<<"The value of a  setw: "<<setw(4)<<a<<endl;
    cout<<"the value of b  setw: "<<setw(4)<<b<<endl;
    cout<<"the value of c  setw: "<<setw(4)<<c<<endl;

    return 0; 


}