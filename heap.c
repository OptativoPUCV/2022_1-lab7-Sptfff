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
  //heapElem aux = pq->heapArray[0];
  heapElem mayor;

  for(int i = 1; i = pq->capac; i++){

    printf("%i", pq->heapArray[i].priority);
    if (mayor.priority <= pq->heapArray[i].priority){
      
      mayor = pq->heapArray[i];
    }
      
  }
  
  
}

Heap* createHeap(){
  //Heap* array = (void *) realloc(void* ,size_t);
  return NULL;
}
