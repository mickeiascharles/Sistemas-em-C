#include <stdio.h>
#include <locale.h>
int senha = 123;
int login, opcao, opcaocarro;
char nome[100], end[150], cor[10], forma_de_pagamento[35], produto[150], tel[20], quant[5];

void iniciar(){
    setlocale(LC_ALL, "portuguese");
    printf("CONCESSIONÁRIA MICKEIAS\n");
    sleep(2);
    system("cls");  
}

void entrar(){
    setlocale(LC_ALL, "portuguese");
    printf("Digite a senha: ");
    scanf("%d", &login);
    while (login != senha) { //Quando (while) o login não for igual a senha 'ERRO DE SENHA'
        printf("ERRO DE SENHA\n");
        sleep(1);
        system("cls"); 
        printf("Digite a senha novamente: ");
        scanf("%d", &login);
    }
    printf("SENHA CORRETA\n");
    sleep(1);
    system("cls");
}

void cadastrar(){
    setlocale(LC_ALL, "portuguese");
    printf("CADASTRO DO CLIENTE\n");
    fflush(stdin);

    printf("Nome completo: ");
    fflush(stdin);
    gets(nome);
   
    printf("Telefone: ");
    gets(tel);

    printf("Endereço: ");
    fflush(stdin);
    gets(end);
    
    system("cls");
    printf("Nome: %s\n", nome);
    printf("Telefone: %s\n", tel);
    printf("Endereço: %s\n", end);
    system("pause");
    system("cls");
}

void compra_de_carro(){
    setlocale(LC_ALL, "portuguese");
    printf("Escolha o carro:\n");
    printf("1 - Sedan\n"); 
    printf("2 - SUV\n");
    printf("3 - Hatch\n"); 
    printf("Digite a opção: ");
    scanf("%d", &opcaocarro);
    while(opcaocarro >3 ){
    	printf("Opção inválida! tente novamente.");
    	sleep(1);
    	system("cls");
    	printf("Escolha o carro:\n");
        printf("1 - Sedan\n"); 
        printf("2 - SUV\n");
        printf("3 - Hatch\n"); 
        printf("Digite a opção: ");
        scanf("%d", &opcaocarro);	
	} 

    printf("Digite a cor do carro: ");
    fflush(stdin);
    gets(cor);

    printf("Escolha a forma de pagamento (à vista/financiado): ");
    fflush(stdin);
    gets(forma_de_pagamento);

    system("cls");

    printf("Dados da compra do carro:\n");
    printf("Carro escolhido: ");
    switch(opcaocarro) {
        case 1: printf("Sedan\n"); break;
        case 2: printf("SUV\n"); break;
        case 3: printf("Hatch\n"); break;
	    default:
            printf("Opção inválida! \n");
            break;
    }
  
    printf("Cor: %s\n", cor);
    printf("Forma de pagamento: %s\n", forma_de_pagamento);
    system("pause");
    system("cls");
}

void compra_de_acessorio(){
	setlocale(LC_ALL, "portuguese");
    printf("VENDA DE ACESSÓRIO\n");
    sleep(1);

    printf("Produto: ");
    fflush(stdin);
    gets(produto);

    printf("Quantidade: ");
    gets(quant);

    system("cls");
    printf("Produto: %s\n", produto);
    printf("Quantidade: %s\n", quant);
    system("pause");
    system("cls");
}

int main(){
    iniciar();
    entrar();
    do {
        printf("\nMENU PRINCIPAL\n");
        printf("1 - Cadastro cliente\n");
        printf("2 - Compra de carro\n");
        printf("3 - Compra de acessório\n");
        printf("4 - Fechar programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) { //Switch para o programa continuar no loop de opçao
            case 1:
            	system("cls");
                cadastrar();
                break;
            case 2:
            	system("cls");
                compra_de_carro();
                break;
            case 3:
            	system("cls");
                compra_de_acessorio();
                break;
            case 4:
            	system("cls");
            	printf("PROGRAMA FINALIZADO!");
            	sleep(1);
            	system("cls");
            	break;
            default:
            	system("cls");
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 4);
    return 0;
}

