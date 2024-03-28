//jodi emon hoi ami 3 input dile 3 tai string input output hobe
// that means loop lagbe
#include<iostream>
#include<string>

using namespace std;

int main()
{

    int t;
    cin>>t;
    cin.ignore(); // cursor ignore hobee nahoi ekta khali rekhe 3 ta input er moddhe 2 ta print hobe
    while(t--){
        string s;
        getline(cin,s);
        cout<<s<<endl;
    }

}
