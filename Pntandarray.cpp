#include<iostream>
using namespace std;
int main()
{
    int marks[4] = {23,45,85,41};

    for(int i = 0; i<4;i++)
    {
        cout<<"the value of the marks "<<marks[i]<<endl;

    }
    //pointer and array
    int* p = marks;
    cout<<"The value is of *p "<<*p<<endl;
    cout<<"The value is of *p+1 "<<*(p+1)<<endl;
    cout<<"The value is of *p+2 "<<*(p+2)<<endl;
    cout<<"The value is of *p+3 "<<*(p+3)<<endl;    
    return 0;
}