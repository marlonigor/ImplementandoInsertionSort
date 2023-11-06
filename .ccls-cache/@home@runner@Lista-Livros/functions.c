#include "structures.h"

struct livro {
  int codigo;
  char *titulo;
  char *assunto;
  struct livro *prox;
  struct livro *ant;
};

Livro *inicializar(void) { return NULL; }

void menu(){
    puts("Sistema: Biblioteca Digital ");
    linha();
    puts("\nEscolha entre as opções a seguir:\n");
    puts("1. Inserir um livro");
    puts("2. Remover um livro");
    puts("3. Exibir todos os livros");
    puts("4. Sair do programa");
}

void linha(){
  char hifen = ('-');
  for (int i = 0; i < 37; i++){
    printf("%c", hifen);
  }
}

Livro *inserirLivro(Livro *l, int codigo, char *titulo, char *assunto) {
  Livro *novo = (Livro *)malloc(sizeof(Livro));
  novo->codigo = codigo;
  novo->titulo = titulo;
  novo->assunto = assunto;
  novo->prox = l;
  return novo;
}

Livro* remover(Livro* l, int valor){
  Livro* anterior = NULL;
  Livro* p = l;
  while (p != NULL && p->codigo != valor){
    anterior = p;
    p = p->prox;
  }
  if (p==NULL)
    return l;
  if (anterior == NULL){
    l = p->prox;
  } else {
    anterior->prox = p->prox;
  }
  free(p);
  return l;
}

void exibirLivros(Livro *l) {
  Livro *p;
  printf("\nLivros:\n");
  for (p = l; p != NULL; p = p->prox) {
    printf("%d. %s - %s", p->codigo, p->titulo, p->assunto);
  }
  printf("\n");
}
