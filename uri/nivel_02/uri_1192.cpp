#include <iostream>

using namespace std;

int calculaResposta(int num_1, char letra, int num_2){

}

int main(){
	
	int n, num_1, num_2, resposta;
	char letra;

	cin >> n;

	for(int i = 0 ; i<n ; i++ ){

		cin >> num_1 >> letra >> num_2;

		resposta = calculaResposta(num_1,letra,num_2);

		cout << resposta << "\n";

	}

return 0;
}


