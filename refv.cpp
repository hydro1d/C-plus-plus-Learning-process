//***********Reference Variables*******

#include<iostream>
using namespace std;
int main()
{
    float x = 4;
    float &y = x;

    cout<<"so this will be:"<<x<<endl;
    cout<<"so this will be:"<<y<<endl;

    return 0; 

}