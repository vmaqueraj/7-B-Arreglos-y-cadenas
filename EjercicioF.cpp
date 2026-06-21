// Ejercicio F Ordenando las letras de la línea

#include <iostream>
#include <string>
using namespace std;

int main () {
	string texto; 
	int contador[26] = {0};
	
	getline(cin, texto)
	
	for(int i=0; i<texto.length(); i++){
		if(texto[i] >= 'a' && texto[i] <= 'z'){  // Usa ASCCI 'a'= 97, 'z'= 122
			contador[texto[i]-'a'] = contador[texto[i]-'a'] + 1; // Cuenta la aparición de cada letra y lo guarda
		}
	}
	
	
	return 0;
}
