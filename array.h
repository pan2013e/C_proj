#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef int ElementType;

typedef struct{
    ElementType *array;
    int size;
} Array;

Array array_create(int init_size);
void array_free(Array *a);
int array_size(const Array *a);
ElementType* array_at(Array *a,int index);
void array_inflate(Array *a,int ext);
void array_set(Array *a,int index,ElementType val);

#endif
