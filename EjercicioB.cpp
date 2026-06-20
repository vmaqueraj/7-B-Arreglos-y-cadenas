// Ejercicio B Palindromos Coding Rush

#include <iostream>
#include <string>
using namespace std;

bool Palindromo(string palabra);

int main () {
	int n;
	char palabra[80];
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> palabra[];
		palabra[] = palabra [i];
	}
	
	for(int i=0; i<n; i++){
		palabra [i] 
		if(){
			cout << "P";	
		}
		else {
			cout << "NP";
		}
	}
	
	return 0;
}

bool Palindromo(string palabra){
	int largo;
	largo = palabra.length();
	
	for(int j=0; j<largo/2; j++){
		if(palabra[j] != palabra[largo-1-j]){
			return false;
		}
	}
	return true;
}
