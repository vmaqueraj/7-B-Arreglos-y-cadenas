// Ejercicio F Ordenando las letras de la línea

#include <iostream>
#include <string>
using namespace std;

int main () {
	string texto; 
	int contador[26] = {0}; // Un espacio para cada letra del alfabeto
	int letraActual = 0;
	
	getline(cin, texto);
	
	for(int i=0; i<texto.length(); i++){
		if(texto[i] >= 'a' && texto[i] <= 'z'){  // Usa ASCCI 'a'= 97, 'z'= 122
			contador[texto[i]-'a'] = contador[texto[i]-'a'] + 1; // Cuenta la aparición de cada letra y lo guarda
		}
	}
	
	for(int i=0; i<texto.length(); i++){
		if(texto[i] >= 'a' && texto[i] <= 'z'){ // Verifica si es letra
			while(contador[letraActual] == 0){ // Si ya no hay esa letra
				letraActual = letraActual +1; // avanza a la siguiente letra del abc
			}
			texto[i] = 'a' + letraActual; // Coloca dicha letra en la posición actual
			contador[letraActual] = contador[letraActual] - 1; // Descontamos una letra disponible
		}
	}
	
	cout << texto;
	return 0;
}
