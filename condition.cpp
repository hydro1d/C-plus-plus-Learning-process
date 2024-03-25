#include<iostream>
using namespace std;
int main()
{   int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"You can't come to this party"<<endl;

    }
    else if(age==18){
        cout<<"You can come to this party but you need pass"<<endl;}

        else if (age<1){
            cout<<"You not even born"<<endl;
        }
        else{
            cout<<"You can come to this party"<<endl;
        }
        return 0;
    }
   