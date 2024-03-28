#include<iostream>
#include<string>
using namespace std;
int main()
{ 
    // string str1 = "Hello";
    // string str2 = "keo";
    // string str3 = str + " " + str2;
    // cout<<str3<<endl; 
    
    // but jodi input e onekgula space thake amra too bujhbbo na tai getline fuction

    string str1,str2;
    getline(cin,str1); //jotota space ase tototai print hoise
    getline(cin,str2);
    cout<<str1<<endl<<str2;




    return 0;
}