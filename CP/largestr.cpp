#include<iostream>
using namespace std;

int main()
{   

    string s;
    cin>>s;
    int last_digit = s[s.size() - 1]-'0'; //large number hole
    cout<<last_digit<<endl;

return 0;
}
