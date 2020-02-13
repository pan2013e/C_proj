#include <stdio.h>
#include <stdlib.h>
#include "array.h"

const int BLOCK_SIZE=20;

Array array_create(int init_size){
    Array new;
    new.size=init_size;
    new.array=(ElementType *)malloc(new.size*sizeof(ElementType));
    return new;
}

void array_free(Array *a){
    free(a->array);
    a->size=0;
    a->array=NULL;
}

int array_size(const Array *a){
    return a->size;
}

ElementType* array_at(Array *a,int index){
    if(index >= a->size) array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);
    return (a->array+index);
}

void array_inflate(Array *a,int ext){
    a->array=realloc(a->array,(a->size+ext)*sizeof(ElementType));
    a->size+=ext;
}

void array_set(Array *a,int index,ElementType val){
    a->array[index]=val;
}

int main(){
    Array a=array_create(100);
    printf("The size of the array is %d.\n",array_size(&a));
    *array_at(&a,10)=100;
    printf("The value of a.array[10] is %d.\n",a.array[10]);
    array_inflate(&a,10);
    printf("Now the new size of the array is %d.\n",array_size(&a));
    *array_at(&a,105)=15;
    printf("The value of a.array[105] is %d.\n",a.array[105]);
    return 0;
}