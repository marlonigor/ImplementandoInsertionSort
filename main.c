#include "structures.h"

int main(void) {

  Livro *biblioteca;
  int opcao_menu, codigo;
  char titulo[100], categoria[50];

  biblioteca = inicializar();

  biblioteca = inserirLivro(biblioteca, 20, titulo, categoria);
  biblioteca = inserirLivro(biblioteca, 9, titulo, categoria);
  biblioteca = inserirLivro(biblioteca, 35, titulo, categoria);
  biblioteca = inserirLivro(biblioteca, 22, titulo, categoria);
  biblioteca = inserirLivro(biblioteca, 7, titulo, categoria);

  do {
    menu(); 
    printf("\nEscolha entre as opções a seguir:\n");
    scanf("%d", &opcao_menu);
  
    switch (opcao_menu) { 
    case 1:
      printf("Insira o código do livro:\n");
      scanf("%d", &codigo);
      
      printf("Insira o título do livro:\n");
      fgets(titulo, 100, stdin);
      while(getchar()!='\n');
      
      printf("Insira a categoria desse livro:\n");
      fgets(categoria, 50, stdin);
  
      biblioteca = inserirLivro(biblioteca, codigo, titulo, categoria);
      
      insertionSort(&biblioteca);
      
      exibirLivros(biblioteca);
      break;
  
    case 2:
      printf("Insira o código do livro:\n");
      scanf("%d", &codigo);
      biblioteca = removerLivro(biblioteca, codigo);
      exibirLivros(biblioteca);
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
