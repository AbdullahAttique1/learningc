#include <iostream>
using namespace std;

// Function to check if a digit is prime
bool isPrime(int digit) {
    return (digit == 2 || digit == 3 || digit == 5 || digit == 7);
}

int main() {
    // Step 1: Display complete VU Student ID
    cout << "My VU Student ID is: Bc250401853a" << endl;

    // Step 2: Store the numerical part of ID (hard-coded)
    long long id = 123456789;

    // Variables for analysis
    int sumOfPrimes = 0;
    int countOfPrimes = 0;

    cout << "Prime digits in ID: ";

    // Step 3: Analyze digits of the numerical ID
    while (id > 0) {
        int digit = id % 10;  // Get last digit
        if (isPrime(digit)) {
            cout << digit << " ";
            sumOfPrimes += digit;
            countOfPrimes++;
        }
        id /= 10; // Remove last digit
    }

    cout << endl;
    cout << "Total prime digits: " << countOfPrimes << endl;
    cout << "Sum of prime digits: " << sumOfPrimes << endl;

    return 0;
}

