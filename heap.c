#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "heap.h"

typedef struct nodo{
   void* data;
   int priority;
}heapElem;

typedef struct Heap{
  heapElem* heapArray;
  int size;
  int capac;
} Heap;


void* heap_top(Heap* pq){
  if (pq->heapArray != NULL || pq->heapArray[0].priority != 0){
    return pq->heapArray[0].data;
  }
  
  return NULL;
}



void heap_push(Heap* pq, void* data, int priority){
  if( pq->size == pq->capac){
    pq->heapArray = realloc(pq->heapArray, (pq->capac*2)+1);
  }
}


void heap_pop(Heap* pq){
  heapElem aux;
  aux = pq->heapArray[0];
  pq = pq[pq->size];
  pq[pq->size] = aux;

  pq[pq->size].data = NULL;
  pq[pq->size].priority = '\0';
  
}

Heap* createHeap(){
   return NULL;
}
