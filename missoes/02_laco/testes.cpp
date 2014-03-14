#include "engine.cpp"
#include "aluno.cpp"

Tester t;

void Testa_soma_1_a_10()
{
	t.open("soma_1_a_10",1);
	t.add(soma_1_a_10() == 55);
	t.close();
}

void Testa_somatorio()
{
	t.open("somatorio",1);
	t.add(somatorio(0) == 0);
	t.add(somatorio(1) == 1);
	t.add(somatorio(2) == 3);
	t.add(somatorio(5) == 15);
	t.add(somatorio(100) == 5050);
	t.close();
}

void Testa_impares_3_500()
{
	t.open("impares_3_500",2);
	t.add(impares_3_500() == 83);
	t.close();
}

void Testa_bacteria()
{
	t.open("bacteria",1);
	t.add(bacteria(0) == 1);
	t.add(bacteria(1) == 2);
	t.add(bacteria(2) == 4);
	t.add(bacteria(4) == 16);
	t.close();
}

void Testa_soma_divisiveis()
{
	t.open("soma_divisiveis",2);
	t.add(soma_divisiveis() == 70704);
	t.close();
}

void Testa_eh_primo()
{
	t.open("eh_primo",1);
	t.add(eh_primo(0) == false);
	t.add(eh_primo(1) == false);
	t.add(eh_primo(2) == true);
	t.add(eh_primo(3) == true);
	t.add(eh_primo(234) == false);
	t.add(eh_primo(173) == true);
	t.close();
}

void Testa_primeiros_primos()
{
	t.open("primeiros_primos",1);
	t.add(primeiros_primos(0) == 0);
	t.add(primeiros_primos(1) == 0);
	t.add(primeiros_primos(2) == 1);
	t.add(primeiros_primos(3) == 2);
	t.add(primeiros_primos(4) == 2);
	t.add(primeiros_primos(5) == 3);
	t.add(primeiros_primos(173) == 40);
	t.close();
}

void Testa_soma_primos()
{
	t.open("soma_primos",1);
	t.add(soma_primos(0) == 0);
	t.add(soma_primos(1) == 0);
	t.add(soma_primos(2) == 2);
	t.add(soma_primos(3) == 5);
	t.add(soma_primos(4) == 5);
	t.add(soma_primos(173) == 3087);
	t.close();
	
}

void Testa_nao_primo_menos_primo()
{
	t.open("primo_menos_nao_primo",2);
	t.add(nao_primo_menos_primo(0) == 0);
	t.add(nao_primo_menos_primo(1) == 1);
	t.add(nao_primo_menos_primo(2) == -1);
	t.add(nao_primo_menos_primo(3) == -4);
	t.add(nao_primo_menos_primo(4) == 0);
	t.add(nao_primo_menos_primo(173) == 8877);
	t.close();
}

void Testa_potencia()
{
	t.open("potencia",2);
	t.add(potencia(0,0) == 1);
	t.add(potencia(0,1) == 0);
	t.add(potencia(1,2) == 1);
	t.add(potencia(2,1) == 2);
	t.add(potencia(2,2) == 4);
	t.add(potencia(2,3) == 8);
	t.add(potencia(12,4) == 20736);
	t.close();
}

void Testa_eh_quadrado_perfeito()
{
	t.open("eh_quadrado_perfeito",2);
	t.add(eh_quadrado_perfeito(0) == false);
	t.add(eh_quadrado_perfeito(1) == true);
	t.add(eh_quadrado_perfeito(2) == false);
	t.add(eh_quadrado_perfeito(3) == false);
	t.add(eh_quadrado_perfeito(4) == true);
	t.add(eh_quadrado_perfeito(35) == false);
	t.add(eh_quadrado_perfeito(140) == false);
	t.add(eh_quadrado_perfeito(6084) == true);
	t.close();
}

void Testa_fatorial()
{
	t.open("fatorial",2);
	t.add(fatorial(0) == 1);
	t.add(fatorial(1) == 1);
	t.add(fatorial(2) == 2);
	t.add(fatorial(3) == 6);
	t.add(fatorial(5) == 120);
	t.add(fatorial(11) == 39916800);
	t.close();
}

void Testa_sequencia_1()
{
	t.open("sequencia_1",1);
	t.add(sequencia_1(1) == 1);
	t.add(sequencia_1(2) == 2);
	t.add(sequencia_1(3) == 4);
	t.add(sequencia_1(4) == 8);
	t.add(sequencia_1(11) == 1024);
	t.close();
}

void Testa_sequencia_2()
{
	t.open("sequencia_2",2);
	t.add(sequencia_2(1) == 1);
	t.add(sequencia_2(2) == 3);
	t.add(sequencia_2(3) == 7);
	t.add(sequencia_2(6) == 63);
	t.add(sequencia_2(11) == 2047);
	t.close();
}

void Testa_sequencia_3()
{
	t.open("sequencia_3",1);
	t.add(sequencia_3(1) == 2);
	t.add(sequencia_3(2) == -3);
	t.add(sequencia_3(5) == 6);
	t.add(sequencia_3(6) == -7);
	t.add(sequencia_3(1234) == -1235);
	t.close();
}

void Testa_sequencia_4()
{
	t.open("sequencia_4",3);
	t.add(sequencia_4(1) == 3);
	t.add(sequencia_4(2) == -6);
	t.add(sequencia_4(3) == 15);
	t.add(sequencia_4(4) == -42);
	t.add(sequencia_4(1234) == 175519706);
	t.close();
}

int main(){
	Testa_soma_1_a_10();
	Testa_somatorio();
	Testa_impares_3_500();
	Testa_bacteria();
	Testa_soma_divisiveis();
	Testa_eh_primo();
	Testa_primeiros_primos();
	Testa_soma_primos();
	Testa_nao_primo_menos_primo();
	Testa_potencia();
	Testa_eh_quadrado_perfeito();
	Testa_fatorial();
	Testa_sequencia_1();
	Testa_sequencia_2();
	Testa_sequencia_3();
	Testa_sequencia_4();
	t.total();
	return 0;
}
