#include <stdio.h>

int main(){
    int p[]={0,1,2,3};
    //int q2=*(p++);  //this sentence will lead to an error
    int *tql=p; //this is particularly important, because p cannot be incremented. 
                //Therefore its address have to be copied to another pointer variable.
    printf("%p\n",tql);
    printf("%d\n",*tql);

    int q;
    q=*(tql++);//sentence 1
    printf("%p\n",tql);
    printf("After sentence 1,q=%d,*tql=%d\n",q,*tql);

    q=*(++tql);//sentence 2
    printf("%p\n",tql);
    printf("After sentence 2,q=%d,*tql=%d\n",q,*tql);
    return 0;
}