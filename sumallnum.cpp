#include<iostream>
using namespace std;
bool isPrime(int num){
	return( num ==2 ||  num ==3 || num==5 || num ==7 );
}
int getPrimeNumbers(int num){
	int sum=0;
	while(num>0){
		if(isPrime(num%10)) sum++;
		
		num /=10;
	}
	
	return sum;
	
}

int main(){	
	int usernumber=123456789;	
	cout <<"total prime number are "<< getPrimeNumbers(usernumber) << endl;
}
