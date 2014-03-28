#include <iostream>
#include <malloc.h>

using namespace std;


double calculaMedia(int medias[], int n){


}

double calculaAcimaMedia(int media, int medias[], int n ){

}

int main(){

	int c, n;
	double porcentagem, media;

	cin >> c; // Quantidade de casos teste

	for (int i = 0; i < c; i++){
		
		cin >> n; // numero de alunos na turma

		int* medias = (int *) malloc (n * sizeof(int));

		for(int j = 0; j<n ; j++)
			cin >> medias[j];

		media = calculaMedia(medias,n);
		porcentagem = calculaAcimaMedia(media,medias,n);

		cout.precision(3);
		cout << fixed << porcentagem << "%\n";

		free(medias);
	}
return 0;
}