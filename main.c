#include "structures.h"

int main(void) {
  
  Livro *biblioteca;
  int opcao_menu, codigo;
  char titulo[50], autor[25];

  biblioteca = inicializar();

  biblioteca = inserirLivro(biblioteca, 20, "Moby Dick", "Herman Melville");
  biblioteca = inserirLivro(biblioteca, 9, "A Divina Comédia", "Dante");
  biblioteca = inserirLivro(biblioteca, 35, "Arte da Guerra", "Sun Tzu");
  biblioteca = inserirLivro(biblioteca, 22, "Ilíada", "Homero");
  biblioteca = inserirLivro(biblioteca, 7, "1984", "George Orwell");

  do {
    menu(); 
    puts("\nEscolha entre as opções a seguir:\n");
    scanf("%d", &opcao_menu);
  
    switch (opcao_menu) { 
    case 1:
      puts("Insira o código do livro:");
      scanf("%d", &codigo);
      while(getchar()!='\n');
      puts("Insira o título do livro:");
      fgets(titulo, sizeof(titulo), stdin);
      titulo[strcspn(titulo, "\n")] = '\0';
      puts("Insira o autor desse livro:");
      fgets(autor, sizeof(autor), stdin);
  
      biblioteca = inserirLivro(biblioteca, codigo, titulo, autor);
      
      insertionSort(&biblioteca);
      
      exibirLivros(biblioteca);
      break;
  
    case 2:
      puts("Insira o código do livro:");
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
