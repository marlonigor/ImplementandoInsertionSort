#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structures.h"

int main(void) {

  Livro *biblioteca;
  int opcao_menu, paginas;
  char titulo[100], assunto[50];

  biblioteca = inicializar();

  do {
    menu(); 
  
    printf("\nEscolha entre as opções a seguir:\n");
    scanf("%d", &opcao_menu);
  
    switch (opcao_menu) {
    case 1:
      printf("Insira o título do livro:\n");
      fgets(titulo, 100, stdin);
      while(getchar()!='\n');
      
      printf("Insira o assunto desse livro:\n");
      fgets(assunto, 50, stdin);
  
      printf("E a quantidade de páginas:\n");
      scanf("%d", &paginas);
  
      biblioteca = inserirLivro(biblioteca, titulo, assunto, paginas);
      
      //ordenacaoInsercao(biblioteca);   
      
      exibirLivros(biblioteca);
      break;
  
    case 2:
      printf("Insira o título do livro:\n");
      fgets(titulo, 100, stdin);
      break;
  
    case 3:
      exibirLivros(biblioteca);
      break;
      
    case 4:
      puts("Saindo do programa.");
      break;
      
    default:
      puts("Opção inválida. Tente novamente!");
      break;
      
    }
    } while (opcao_menu != 4);

  return 0;
}
