#include<iostream>
#include <algorithm>//for reverce prime num

using namespace std;

bool isPrime(int digit){
	return(digit==2 || digit==3  || digit==5 || digit==7);
}

//total prime number 

int countPrimeDigits(long  studentId) {
	int count=0;

	while(studentId>0){
		int checkDigit=studentId%10;		
		if(isPrime(checkDigit)){
		count ++;
		}
		studentId=studentId/10;
	}
	
	
	return count;	
}



// sum of prime numbers
int sumPrimeDigits(long  studentId) {
	int sum=0;
	while(studentId>0){
		int checkDigit=studentId%10;
		if(isPrime(checkDigit)){			
			sum=sum+checkDigit;
		}
		studentId=studentId/10;
	}
		return sum;	
}

//calculate the average PrimeDigits

double  averagePrimeDigits(long studentId){
	double sumId=sumPrimeDigits(studentId);
	double totalprimeNum=countPrimeDigits(studentId);
	if(totalprimeNum==0)return 0;	
	return (double)sumId / totalprimeNum;
}

// calculate the maximunm prime num
int maxPrimeDigit(long studentId){
	int maxnumber=-1;
	while(studentId > 0){
		int num=studentId %10;
		
		if(isPrime(num) && num > maxnumber){
			maxnumber =num;
		}
			studentId=studentId/10;
	}
	return maxnumber;
	
}


// calculate the minumum prime num
int minPrimeDigit(long studentId){
	int minnumber=10;
	while(studentId > 0){
		int num=studentId %10;
		if(isPrime(num) && num < minnumber){
			minnumber =num;
		}
			studentId=studentId/10;
	}
	if(minnumber==10){
		return -1;
	}else{
		return minnumber;
	}
	
	
	
}



int main(){
//	write user Id
	string studentId="BC250401853";
	//	1)Display complete vu Id 
	cout << "Student ID: " << studentId  << endl;
	
	//Write vu numaric Id Numaricaly
	//2)2.	Store the numerical part in a variable (assign hard-coded value of ID, no need to take input from the user)
		long   numericalPart =250401853;	
//	3)display numaric ID 3.	Display the numerical part of your VU Student ID
		cout << "Numerical Part: " << numericalPart  << endl <<endl;
		
		
		int totalPrimeNumbers=countPrimeDigits(numericalPart);

if(totalPrimeNumbers == 0){
	cout <<endl << "No prime Digits found in Student ID. " << endl;
	return 0;
}		



// display prime numbers

cout << "Prime digits: ";
long newnumericalPart = numericalPart;
long reversed = 0;

// reverse the number 
while (newnumericalPart > 0) {
    reversed = reversed * 10 + (newnumericalPart % 10);
    newnumericalPart =newnumericalPart/ 10;
}

// print the prime numbers
while (reversed > 0) {
    int digit = reversed % 10;
    if (isPrime(digit))
        cout << digit << " ";
    reversed /= 10;
}
cout << endl <<endl;
		
		
int sumofPrimeNum= sumPrimeDigits(numericalPart);

double averprimeNumInId=averagePrimeDigits(numericalPart);
int maxPrimeDigitnum=maxPrimeDigit(numericalPart);
int minPrimeDigitnum=minPrimeDigit(numericalPart);
	
	
cout  <<"Total Prime Digits: " << totalPrimeNumbers <<endl << endl ;
cout << "Sum of Prime Digits: " << sumofPrimeNum <<endl << endl ;
cout << "Average of prime Digits: " << averprimeNumInId <<endl << endl ;
cout << "Maximum Prime Digit: " << maxPrimeDigitnum <<endl << endl ;
cout << "Minimum Prime Digit : " << minPrimeDigitnum <<endl;
return 0;
}
