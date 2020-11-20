// Write your random_array code definitions here, to be used inside of main.c. 
#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#include "random_array.h"

#define ARRAY_SIZE 200



typedef struct random_array_t
{
    int min [50];
    int max [100];

};


int main (int argc, char* argv [argc + 1])
{
    int random_array[ARRAY_SIZE] = {0};
    srand(time(NULL));
    for (int i =0; i < ARRAY_SIZE; i++) {
        random_array[i] = rand() % 200 - 99;
        printf("%d ",random_array[i]);
    }

    return EXIT_SUCCESS;
}

void random_array_sort(random_array_t* random_array){
    int temp = random_array_t;
    random_array_t = random_array;
    random_array = temp;
}


void random_array_print(random_array_t* random_array){
    printf("%d", );
}

void random_array_dtor(random_array_t* random_array){

}

