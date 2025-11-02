#include <iostream>
using namespace std;

// Function to check if a digit is prime
bool isPrime(int digit) {
    if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
        return true;
    else
        return false;
}

// Function to count total prime digits
int countPrimeDigits(long studentId) {
    int count = 0;
    while (studentId > 0) {
        int digit = studentId % 10;
        if (isPrime(digit))
            count++;
        studentId /= 10;
    }
    return count;
}

// Function to find the sum of prime digits
int sumPrimeDigits(long studentId) {
    int sum = 0;
    while (studentId > 0) {
        int digit = studentId % 10;
        if (isPrime(digit))
            sum += digit;
        studentId /= 10;
    }
    return sum;
}

// Function to find average of prime digits
double averagePrimeDigits(long studentId) {
    int count = countPrimeDigits(studentId);
    if (count == 0)
        return 0;
    int sum = sumPrimeDigits(studentId);
    return (double)sum / count;
}

// Function to find maximum prime digit
int maxPrimeDigit(long studentId) {
    int maxPrime = -1;
    while (studentId > 0) {
        int digit = studentId % 10;
        if (isPrime(digit) && digit > maxPrime)
            maxPrime = digit;
        studentId /= 10;
    }
    return maxPrime;
}

// Function to find minimum prime digit
int minPrimeDigit(long studentId) {
    int minPrime = 10;
    bool found = false;
    while (studentId > 0) {
        int digit = studentId % 10;
        if (isPrime(digit) && digit < minPrime) {
            minPrime = digit;
            found = true;
        }
        studentId /= 10;
    }
    if (!found)
        return -1;
    return minPrime;
}

// Main function
int main() {
    string studentID = "BC123456789";  // You can replace it with your own ID
    long numericalPart = 123456789;    // Numerical part of your ID

    cout << "Student ID: " << studentID << endl;
    cout << "Numerical Part: " << numericalPart << endl;
    cout << endl;

    int totalPrime = countPrimeDigits(numericalPart);

    // If no prime digits found
    if (totalPrime == 0) {
        cout << "No prime digits found in the Student ID." << endl;
        return 0; // Exit program early
    }




    cout << "Prime Digits: ";
    long temp = numericalPart;
    long reversed = 0;
    
    // Reverse the number first
    while (temp > 0) {
    	reversed = reversed * 10 + (temp % 10);
    	temp /= 10;
	}
	
	// print the prime number in perfect order
    while (reversed > 0) {
        int digit = reversed % 10;
        if (isPrime(digit))
            cout << digit << " ";
        reversed /= 10;
    }
    cout << endl << endl;

    int sum = sumPrimeDigits(numericalPart);
    double avg = averagePrimeDigits(numericalPart);
    int maxPrime = maxPrimeDigit(numericalPart);
    int minPrime = minPrimeDigit(numericalPart);

    cout << "Total Prime Digits: " << totalPrime << endl << endl;
    cout << "Sum of Prime Digits: " << sum << endl << endl;
    cout << "Average of Prime Digits: " << avg << endl << endl;
    cout << "Maximum Prime Digit: " << maxPrime << endl << endl;
    cout << "Minimum Prime Digit: " << minPrime << endl;

    return 0;
}
