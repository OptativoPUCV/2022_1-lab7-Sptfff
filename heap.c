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
  
  if(pq->size == 0){
    return NULL;
  }

  return pq->heapArray[0].data;
}



void heap_push(Heap* pq, void* data, int priority){
  if( pq->size == pq->capac){
    pq->heapArray = realloc(pq->heapArray, (pq->capac*2)+1);
  }
}


void heap_pop(Heap* pq){
  heapElem aux = pq->heapArray[0];
  heapElem mayor;
  
  aux = pq->heapArray[pq->size];
  pq->heapArray[pq->size] = pq->heapArray[0];//Mueve el dato en posicion[0] al ultimo lugar
  pq->heapArray[0] = aux;

  pq->heapArray[pq->size].data = NULL;
  pq->heapArray[pq->size].priority = 0;
  pq->size--;

  mayor.data = pq->heapArray[0].data;
  mayor.priority = pq->heapArray[0].priority;
  int i;
  while(i != pq->capac){

    //printf("%i", mayor.priority);
    if (mayor.priority <= pq->heapArray[i].priority){
      aux = mayor;
      mayor = pq->heapArray[i];
      pq->heapArray[i] = aux;
    }

    i++;
  }
  
  
}

Heap* createHeap(){
  //Heap* array = (void *) realloc(void* ,size_t);
  return NULL;
}
