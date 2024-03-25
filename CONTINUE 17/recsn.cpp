#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int main ()
{
 int a;
 cout<<"Enter the value of a"<<endl;
 cin>>a;
 cout<< "The value of a is "<<a<< " and the factorial of a is "<<factorial(a)<<endl;

 return 0;
}