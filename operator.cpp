//arithmatic operator(+ - / *)
//comparison operator(<=,==,>=,!=) 
//logical operator(&&,||)

#include<iostream>
using namespace std;
int main()
{
  int a=4,b=2;

  cout << "The value of a+b "<<a+b<<endl;
  cout << "The value of a-b "<<a-b<<endl;  
  cout << "The value of a/b "<<a/b<<endl;
  cout << "The value of a*b "<<a*b<<endl;
  cout << "The value of a++ "<<a++<<endl;
  cout << "The value of a-- "<<a--<<endl;
  cout << "The value of ++a "<<++a<<endl;
  cout << "The value of --a "<<--a<<endl;
  cout<< endl;

  cout<<"The value of (a==b) and (a<=b): "<< ((a==b) && (a<=b))<<endl;
  cout<<"The value of (a==b) and (a<=b): "<< ((a!=b) && (a>=b))<<endl;  
  cout<<"The value of (a==b) and (a<=b): "<< ((a==b) || (a>=b))<<endl;
    return 0;
}   