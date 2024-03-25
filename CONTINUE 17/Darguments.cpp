#include<iostream>
using namespace std;

//speed fast of execution
inline int product(int a, int b){
    return a*b;
}

float moneyReceipt(int currentMoney,float factor = 1.04)
{
    return currentMoney * factor;
}

int main(){
    int a, b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    //cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 8500000;
    cout<<"your money now: "<<money<<endl<<"After 1 year: "<<moneyReceipt(money);
    return 0;
}
                                        //function bracket er vitor  const diye korle constent arguments hoye jabe
