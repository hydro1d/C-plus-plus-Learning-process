#include<iostream>
using namespace std;

int main() {
    for(int i = 1; i < 8; i++) {
        if(i == 4) {
            continue ; // continue the loop if i is equal to 4
        }
        cout << i << endl; // Print the value of i
    }

    return 0;
}
