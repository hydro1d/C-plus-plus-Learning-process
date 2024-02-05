#include<iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter the value of number 1: "; // Insertion operator
    cin >> num1; // Extraction operator

    cout << "Enter the value of number 2: "; // Insertion operator
    cin >> num2; // Extraction operator

    cout << "The sum is: " << num1 + num2 << endl; // Improved readability with endl
    return 0;
}
