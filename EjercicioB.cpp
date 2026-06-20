// Ejercicio B Palindromos Coding Rush

#include <iostream>
#include <string>
using namespace std;

bool Palindromo(string palabra);

int main () {
	int n;
	string p;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> p;
	}
	
	if(Palindromo(p)==true){
		cout << "P"<<endl;	
	}
	else {
		cout << "NP"<<endl;
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
