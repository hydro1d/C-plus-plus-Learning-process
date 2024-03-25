#include<iostream>
using namespace std;

struct employee
{
    int eID;
    char gname;
    float salary;
};


int main()
{
    struct employee sourabh;
    sourabh.gname = 'H  ';
    sourabh.eID = 23235299;
    sourabh.salary = 85.5;


    cout<<sourabh.gname<<endl;
    cout<<sourabh.eID<<endl;
    cout<<sourabh.salary<<endl;

    return 0;
    
}