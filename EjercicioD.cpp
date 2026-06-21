// Ejercicio D Canicas

#include <iostream>
using namespace std;

int A[1000005]={0}; 

int main () {
	long long n, c;
	int a;
	
	cin>>n >> c;
	
	for(int i=0; i<c; i++){
		cin>> a;
		A[a] = A[a]+1;
	}
	
	for(int i=1; i<=n; i++){
		cout << A[i] << endl; 
	}
	
	return 0;
}
