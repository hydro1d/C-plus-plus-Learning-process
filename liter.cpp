//****************float double and long double literals*************
#include<iostream>
using namespace std;
int c = 45;
int main()
{   
    int a,b,c;
    cout<<"Enter tha value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    c = a+b;
    cout<<"The total sum is:"<<c<<endl;
    cout<<"The previous value of C is:"<<::c<<endl;
//pore f or l diye kora jai 
    float d = 31.4f;
    long double e = 31.4l;

    cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;
    //size konta koto byte
    cout<<"the size of 31.4 is "<<sizeof(31.4)  <<endl;
    cout<<"the size of 31.4f is "<<sizeof(31.4f)<<endl;
    cout<<"the size of 31.4F is "<<sizeof(31.4F)<<endl;
    cout<<"the size of 31.4l is "<<sizeof(31.4l)<<endl;
    cout<<"the size of 31.4L is "<<sizeof(31.4L)<<endl;  
    return 0;
}