#include <stdio.h>
float valor1, valor2, valor3, valor4, total;

int main(){

	//Solicita o Valor 1
	printf("Biscoito: ");
	scanf ("%f", &valor1);
	//Solicita o Valor 2
	printf("Ceverja: ");
	scanf ("%f", &valor2);
	//Solicita o Valor 3
	printf("Bolo: ");
	scanf ("%f", &valor3);
	//Solicita o Valor 4
	printf("Arroz: ");
	scanf ("%f", &valor4);
	
	//Soma dos Valores
	total = (valor1 + valor2 + valor3 + valor4);
	
	//Limpa a tela
	system("cls");
	
	//Imprime os Valores e o Total
	printf("Biscoito: %2.f \n", valor1);
	printf("Cerveja: %2.f \n", valor2);
	printf("Bolo: %2.f \n", valor3);
	printf("Arroz: %2.f \n", valor4);
	printf("TOTAL = %2.f", total);
	
	
}
