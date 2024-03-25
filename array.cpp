#include<iostream>
using namespace std;
int main()
{
    int marks[4] = {23,45,85,41};

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

cout<<"now arekta kichu korbo"<<endl;
    int mathmarks[4];
    mathmarks[0] = 49;
    mathmarks[1] = 76;
    mathmarks[2] = 55;

    cout<<mathmarks[2]<<endl;

    // can change the value of an array
    marks[2]=97;
    cout<<marks[2]<<endl; // 2 no e 85 change hoye 97 print hoise
}