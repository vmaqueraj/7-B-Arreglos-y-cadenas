// Ejercicio C Frecuencias

#include <iostream>
using namespace std;

int main () {
	int p, n, f;
	int A[101];
	cin>>p>>n;
	
	for(int i=0; i<n; i++){
		cin >> f;
		A[f] = A[f]+1;
	}
	
	for(int i=0; i<=p; i++){
		if (A[i]==p){
			cont=cont+1;
			p=p+1;
		}
	}
	
	cout << p[i] << "-" << cont[i]; 
	
	return 0;
}
