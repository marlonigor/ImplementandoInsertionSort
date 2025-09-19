# Biblioteca Digital

Este projeto é uma implementação em C de um **sistema simples de gerenciamento de livros**.  

Ele permite cadastrar, remover e listar livros, mantendo-os **ordenados automaticamente** por código com o algoritmo *Insertion Sort*.

A estrutura de dados utilizada é uma **lista encadeada simples**.

## Funcionalidades
- Inserir livros (código, título e autor).
- Remover livros pelo código.
- Listar todos os livros cadastrados.
- Ordenação automática via *Insertion Sort*.

## Estrutura do projeto (Tipo Abstrato de Dados)
- `main.c`: ponto de entrada, interação com o usuário.
- `functions.c`: funções de inserção, remoção, exibição e ordenação.
- `structures.h`: definição do tipo `Livro` e cabeçalhos das funções.

## Conceitos Abordados
- Listas encadeadas: cada livro é um nó que aponta para o próximo.

- Algoritmo de ordenação: Insertion Sort adaptado para lista encadeada.

- Complexidade: O(n²) no pior caso, O(n) para listas quase ordenadas.

- Modularização: separação entre lógica principal, funções e estruturas.
