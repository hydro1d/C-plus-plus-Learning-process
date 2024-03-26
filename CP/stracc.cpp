#include<iostream>
#include<string>
using namespace std;
int main()
{ 
    string str = "Hello mf";
    str[0]='a';//single char tai "" dite parbo na. karon amra string assign kortesi na
    str[3]='p';

    cout<<str<<endl;


    return 0;
}