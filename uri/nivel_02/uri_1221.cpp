#include <iostream>

using namespace std;

int verificaPrimo(int num){


}

int main(){

	int n, num, primo;

	cin >> n;

	for(int i = 0; i<n ; i++){

		cin >> num;
		primo = verificaPrimo(num);
		if(primo)
			cout << "Prime\n";
		else cout << "Not Prime\n";
	}
return 0;
}