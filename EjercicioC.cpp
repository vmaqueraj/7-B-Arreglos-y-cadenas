// Ejercicio C Frecuencias

#include <iostream>
using namespace std;

int main () {
	int p, n, f;
	int A[102] = {0};
	cin>>p>>n;
	
	for(int i=0; i<n; i++){
		cin >> f;
		A[f] = A[f]+1;
	}
	
	for(int i=1; i<=p; i++){
		cout << i << "-" << A[i] << endl; 
	}
	
	return 0;
}
