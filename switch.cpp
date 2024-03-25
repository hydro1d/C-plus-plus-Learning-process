#include<iostream>
using namespace std;
int main()
{
    int age;

    cout<<"tell me about your age"<<endl;
    cin>>age;

    switch(age)
    {
        case 18:
        cout<<"you can go 18"<<endl;
        break;

        case 22:
        cout<<"you can go 22"<<endl;
        break;

        case 26:
        cout<<"now marry me 26"<<endl;
        break;

        default:
        cout<<"do whatever you want no age"<<endl;
        break;

    }
    cout<<"Mar jaa abb";
    return 0;
}