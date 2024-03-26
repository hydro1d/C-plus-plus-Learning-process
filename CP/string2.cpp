#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Hello ";
    string str2 = "mf";
    string str3 = "mf";
    string result = str + str2;

    cout << result << endl;

    if (str2 == str3)
    {
        cout << "Equal" <<endl;
    }
    else
    {
        cout << "not equal" << endl;
    }

    return 0;
}