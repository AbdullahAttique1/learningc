#include<iostream>
using namespace std;

	bool isPrime(int d){
		return (d==2 || d==3 || d==5 || d==7);
	}

int main(){
	//make a fun that print num 1 to 10 and seprate prime numbers
	

	
	for (int i =0 ; i<=9; i++){
		cout << i << (isPrime(i) ?" is prime\n" : " is not prime\n");
	}
	
	
	
}
