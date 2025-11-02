#include <iostream>
using namespace std;


string remAlphabet(string vuid){
	string newId="";
	for(int i=0; i<=vuid.length(); i++){
	if(isdigit(vuid[i])) 	
	 newId.push_back(vuid[i]);			
	}
	return newId;
}

int main(){

string  vuId="Bc250401853a";

string onlyNum=remAlphabet(vuId);

cout << onlyNum << endl;
	
}
