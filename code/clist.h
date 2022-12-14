#ifndef CLIST_H
#define CLIST_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct CircularNode{

    int val;
    struct CircularNode *prox, *ant;

}CNode;

typedef struct TypeCircularList{

    size_t size;
    CNode *first,*last;

}CList;

/**
 * @brief Cria uma Lista Circular Vazia
 * 
 * @param cl Endereço da lista (&cl)
 */
void CList_CreateCircularList(CList *cl);

/**
 * @brief Cria um nó.
 * 
 * @param val Valor do nó.
 */
CNode *CList_CreateCNode(int val);

/**
 * @brief Para saber se a lista está ou não vazia.
 * 
 * @param cl Endereço da lista (&cl).
 * @return true Lista vazia.
 * @return false Lista não vazia.
 */
bool CList_isEmpty(CList *cl);

/**
 * @brief Insere um nó na cabeça da lista.
 * 
 * @param cl Endereço da lista (&cl).
 * @param val Valor.
 */
void CList_InsertInHead(CList *cl, int val);

/**
 * @brief Insere um nó no final da lista.
 * 
 * @param cl Endereço da lista (&cl).
 * @param val Valor.
 */
void CList_InsertFinalList(CList *cl, int val);

/**
 * @brief Imprime os elementos da lista de forma ascendente.
 * 
 * @param cl Endereço da lista (&cl).
 */
void CList_PrintCList(CList *cl);

/**
 * @brief Imprime os elementos da lista de forma descendente.
 * 
 * @param cl  Endereço da lista (&cl).
 */
void CList_PrintInvertCList(CList *cl);

/**
 * @brief Remove um nó da lista.
 * 
 * @param cl Endereço da lista (&cl).
 * @param val Valor.
 */
void CList_RemoveCNode(CList *cl, int val);

/**
 * @brief Desaloca Lista
 * 
 * @param cl Endereço da lista (&cl).
 */
void CList_DestroyList(CList *cl);

#endif