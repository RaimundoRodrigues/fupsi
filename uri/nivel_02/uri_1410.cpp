#include <iostream>
#include <malloc.h>

using namespace std;


char verificaImpedimento(int a, int d, int B[], int C[]){

	
}



int main(){

	int a, d;
	char resposta;

	while(1){

		cin >> a >> d;

		if(a == 0 && d == 0)
			return 0;
		
		int *B =  (int *) malloc( a * sizeof(int));

		for(int i = 0; i < a; i++){

			cin >> B[i];
		} 

		int *C = (int *) malloc( d * sizeof(int));

		for (int i = 0; i < d; i++){
			
			cin >> C[i];
		}


		resposta = verificaImpedimento(a, d, B, C);

		cout << resposta << "\n";

	}

	return 0;
}