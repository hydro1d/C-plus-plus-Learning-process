#include<iostream>
using namespace std;
int main()
{
    int marks[4] = {23,45,85,41};

    for(int i = 0; i<4;i++)
    {
        cout<<"the value of the marks "<<marks[i]<<endl;
        marks[3]=52;
        cout<<"3 no value change and its now "<<marks[i]<<endl;
    }
}