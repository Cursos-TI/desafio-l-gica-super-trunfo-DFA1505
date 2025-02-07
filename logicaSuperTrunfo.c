#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int codigo;                
    char nome[30];             
    float populacao;
    float PIB;
    int codigo2;                
    char nome2[30];             
    float populacao2;
    float PIB2;
    
    
    printf("### CADASTRE UMA CARTA A SEGUIR ###:\n");                           
                                                                        
    printf("Digite o código do país:");                     
    scanf ("%d",&codigo);

   printf("Digite o nome do país:");   
   scanf("%s",&nome);

   printf("Digite a população do país:");   
   scanf("%f", &populacao);

   printf("Digite o PIB do país:");  
   scanf("%f", &PIB);                         
                                                                                                    
  
   printf("### CADASTRE OUTRA CARTA A SEGUIR ###\n");                           
                                                                        
    printf("Digite o código do país:");                     
    scanf ("%d",&codigo2);

   printf("Digite o nome do país:");   
   scanf("%s",&nome2);

   printf("Digite a população do país:");   
   scanf("%f", &populacao2);

   printf("Digite o PIB do país:");  
   scanf("%f", &PIB2);

printf("### DADOS DA PRIMEIRA CARTA ###\n");
printf("Código do País: %d\n", codigo);
 printf("Nome do País: %s\n", nome);
 printf("População do País: %f\n", populacao);
 printf("PIB do País: %f\n", PIB);
 printf("\n");

printf("### DADOS DA SEGUNDA CARTA ###\n");
 printf("Código do País: %d\n", codigo2);
 printf("Nome do País: %s\n", nome2);
 printf("População do País: %f\n", populacao2);
 printf("PIB do País: %f\n", PIB2);
 printf("\n");
     


 if (populacao && PIB > populacao2 && PIB2)
 {
    printf("### PRIMEIRO PAÍS VENCE ###");
 }
 else
 {
   printf("### SEGUNDO PAÍS VENCE ###");
 }

               
                       
                       
                       
                       
                       
                       
                       
                       
                                                                                         // Comparação de Cartas:
                                                                                          // Desenvolva a lógica de comparação entre duas cartas.
                                                                                         // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
