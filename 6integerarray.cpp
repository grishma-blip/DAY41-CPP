// Write a program to take 6 integers as input, store them in an array, and
// calculate the sum of all elements in the array.
#include <iostream>
using namespace std;
int main() {
    const int SIZE = 6; 
    int numbers[SIZE];  
    int sum = 0;       
    cout << "Enter 6 integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i]; 
    }
    for (int i = 0; i < SIZE; i++) {
        sum += numbers[i]; 
    }
    cout << "The sum of the elements is: " << sum << endl;
    return 0; 
}