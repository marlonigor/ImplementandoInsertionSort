#ifndef structures_h
#define structures_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct livro Livro;

Livro* inicializar(void);
void menu();
void linha();
Livro* inserirLivro(Livro *l, int codigo, char *titulo, char *autor);
Livro* removerLivro(Livro *l, int codigo);
void insertionSort(Livro **l);
void exibirLivros(Livro *l);

#endif