#include <stdio.h>


void print(void);


void print(){
    printf("\n");
    printf("Hello Wrap\n\n");
}


//gcc -shared -Wl,-soname,testlib -o testlib.so -fPIC testlib.c