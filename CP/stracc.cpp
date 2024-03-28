#include<iostream>
#include<string>
using namespace std;
int main()
{ 
    string valo = "Hello mf"; //space o count hoi
    valo[0]='a';//single char tai "" dite parbo na. karon amra string assign kortesi na
    valo[3]='p';

    cout<<valo<<endl;
    cout<<"The size of the string "<<valo.size()<<endl;


    return 0;
}