// Write a C++ program to input 5 integers from the user into an array and find
// the largest number in the array
#include <iostream>
using namespace std;
int main() {
    const int SIZE = 5; 
    int numbers[SIZE];  
    int largest;       
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i]; 
    }
    largest = numbers[0];
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i]; 
            }
    }
    cout << "The largest number is: " << largest << endl;
    return 0; 
}