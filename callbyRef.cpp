#include<iostream>
using namespace std;

int sum(int a,int b){
    int c = a+b;

    return c;
}


// this will not swap a and b
void swap(int a , int b)// temp a  b
{
    int temp = a;       //  4   4  5   
    a = b;              //  4   4  5   
    b = temp;           //  4   5  4

}
//this will swap using pointer(CALL BY REFERENCE)
void swapPointer(int* a ,int* b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}

int main()
{
    int x = 4,y=5;
    swap(x,y); //this will not swaping
    cout<<"The value of a is: "<<x<<endl<<"and the value of b is: "<<y<<endl; 
    swapPointer(&x,&y);
    cout<<"Now the valur of a is: "<<x<<endl<<"and the value of b is: "<<y<<endl; 
}