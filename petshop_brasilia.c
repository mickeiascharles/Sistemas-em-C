#include <stdio.h>
#include <locale.h>
#include <string.h> // Para usar strcmp na verificação da senha
#include "FUNCAO1.h" //Puxando o menu 'cadastrar cliente' do arquivo externo
int opcao, i_cliente, i_banho, i_consulta; //Colocando o contador dentro do objeto
char login[20];
char senha[] = "patinha"; // login

struct Cliente cliente[10]; // Cadastro do cliente
struct {char nome_pet2[20]; int opcao_banho;} agenda_banho[10]; // Agendar banho
struct {struct Cliente cliente; int opcao_data, opcao_dr;} agenda_consulta[10]; // Consulta

void acesso() {
    while (1) {
        printf("Digite a senha: ");
        scanf("%s", login);

        if (strcmp(login, senha) == 0) { //Usando 'strcmp' para verificar a caractere do usuário se é igual colocada na memória
        	system("cls");
            printf("Senha correta! Bem-vindo ao sistema.\n");
            system("pause");
            break;
        } else {
        	system("cls");
            printf("Senha incorreta! Tente novamente.\n");
        }
    }
}

void inicializacao(){
	system("cls");
	printf("Petshop_Brasilia");
	sleep(2);
}

void banho(){
	printf("Petshop_Brasilia\n");
	printf("Nome (pet): ");
	fflush(stdin);
	fgets(agenda_banho[i_banho].nome_pet2, sizeof(agenda_banho[i_banho].nome_pet2), stdin); //Sizeof ta determinando o tamanho do objeto da struct

	printf("Escolha uma opção: \n");
	printf("1 - Banho\n");
	printf("2 - Tosa\n");
	printf("3 - Banho e tosa\n");
	printf("Digite a opção: ");
	scanf("%d", &agenda_banho[i_banho].opcao_banho);
	system("cls");
	}

void consulta(){
	printf("Petshop_Brasilia\n");
	printf("Data: \n");
	printf("1 - Quinta-feira\n");
	printf("2 - Sexta-feira\n");
	printf("Digite a opção: ");
	scanf("%d", &agenda_consulta[i_consulta].opcao_data);

	printf("Selecione um Cliente: \n");
	int j; //Colocando o contador como 'j' pq o 'i' ja está sendo utilizado
	for (j = 0; j < i_cliente; j++)
	{
		printf(" %d: %s", j + 1, cliente[j].nome); //+1 pra remover a unidade adicionada antes na impressão e selcionar a opção correta na impressão
	}
    
	int cliente_index;
	printf ("Digite a opção: ");
	scanf("%d", &cliente_index);
	agenda_consulta[i_consulta].cliente = cliente[cliente_index - 1]; //index ta acessando o array da struct cliente, subtraindo -1 pra remover a unidade adcionada anteriormente na impressão selecionar a posição certa

	printf("Dr/Dra: \n");
	printf("1 - Mickeias\n");
	printf("2 - Fabiano\n");
	printf("Digite a opção: ");
	scanf("%d", &agenda_consulta[i_consulta].opcao_dr);
	system("cls");
}

void imprimir(){
	printf("Petshop_Brasilia\n");
	printf("\nCLIENTES CADASTRADOS:\n");
	int j; 
	for (j = 0; j < i_cliente; j++)
	{
		printf("Cliente: %s", cliente[j].nome);
		printf("Pet: %s", cliente[j].nome_pet);
		printf("Telefone: %s", cliente[j].tel);
	}

	printf("\nAGENDAMENTOS\n");
	for (j = 0; j < i_banho; j++)
	{
        printf("Nome do pet: %s", agenda_banho[j].nome_pet2);
		printf("Serviços: ");
		switch (agenda_banho[j].opcao_banho)
		{
		case 1:
			printf("Banho\n");
			break;
		case 2:
			printf("Tosa\n");
			break;
		case 3:
			printf("Banho e tosa\n");
			break;
		default:
			printf("Opção inválida!\n");
		}
	}

	printf("\nCONSULTAS\n");
	for (j = 0; j < i_consulta; j++)
	{
		printf("Data: ");
		switch (agenda_consulta[j].opcao_data)
		{
		case 1:
			printf("Quinta-feira\n");
			break;
		case 2:
			printf("Sexta-feira\n");
			break;
		default:
			printf("Opção Invalida!\n");
		}
		printf("Nome cliente: %s", agenda_consulta[j].cliente.nome);
		printf("Dr/Dra: ");
		switch (agenda_consulta[j].opcao_dr)
		{
		case 1:
			printf("Mickeias\n");
			break;
		case 2:
			printf("Fabiano\n");
			break;
		default:
			printf("Opção inválida!\n");
		}
	}
	system("pause");
}

int main(){
	setlocale(LC_ALL, "portuguese");
	acesso();
	inicializacao();
	do
	{
		system("cls");
		printf("Petshop_Brasilia\n");
		printf("\nMENU\n");
		printf("1 - Cadastro do cliente\n");
		printf("2 - Agendar banho ou tosa\n");
		printf("3 - Consulta\n");
		printf("4 - Imprimir relatório geral\n");
		printf("5 - SAIR\n");
		printf("Escolha uma opção:");
		scanf("%d", &opcao);

		switch (opcao)
		{ // Switch para o programa continuar no loop de opÃƒÂ§ao
		case 1:
			system("cls");
			cadastrar(cliente, i_cliente);
			i_cliente++;
			break;
		case 2:
			system("cls");
			banho();
			i_banho++;
			break;
		case 3:
			system("cls");
			consulta();
			i_consulta++;
			break;
		case 4:
			system("cls");
			imprimir();
			break;
		case 5:
			system("cls");
			printf("Volte sempre ao Petshop_Brasilia");
			sleep(1);
			break;
		default:
			system("cls");
			printf("Opção inválida! Tente novamente.\n");
			break;
		}
	} while (opcao != 5);
	
return 0;
}
