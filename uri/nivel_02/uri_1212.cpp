#include <iostream>

using namespace std;



int calculaCarry(int num_01, int num_02){

	
}


int main(){

	int num_01, num_02, qtd_carry;

	while(1){

		cin >> num_01 >> num_02;

		if(num_01 == 0 && num_02 == 0)
			return 0;

		qtd_carry = calculaCarry(num_01, num_02);

		if(qtd_carry == 0)
			cout << "No carry operation.\n";

		else if(qtd_carry == 1)
			cout << "1 carry operation.\n";

		else cout << qtd_carry << " carry operations.\n";

	}

	return 0;
}