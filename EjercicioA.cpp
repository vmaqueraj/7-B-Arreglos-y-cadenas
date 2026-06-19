//Ejercicio A Reverso

#include <iostream>
using namespace std;

int main () {
	int A[1000], n;
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>A[i];
	}
	for(int i=n; i<0; i--){
		cin>>A[i];
	}
	return 0;
}
