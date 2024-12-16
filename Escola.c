#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "");

    char nomeUsuario[50];
    char nomeEstudante[100];
    float nota1, nota2, media;

    // Solicita o nome do usuário
    printf("Digite seu nome: ");
    gets(nomeUsuario);

    // Mensagem de boas vindas
    printf("Boas vindas, %s!\n", nomeUsuario);
    
     // Cadastro de estudante
    printf("Nome completo do(a) estudante: ");
    gets(nomeEstudante);
    
    // Solicita as notas
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    
    // Calcula a média
    media = (nota1 + nota2) / 2;
    
    // Limpa a tela 
    system("cls");
    
    // Imprime os dados do estudante
    printf("Dados do Estudante:\n");
    printf("Nome: %s\n", nomeEstudante);
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Média: %.2f\n", media);
  
    return 0;
}
