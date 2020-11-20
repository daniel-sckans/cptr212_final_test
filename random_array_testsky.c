#include <stdio.h>
#include <stdlib.h>
#include "random_array.h"

int main(int argc, char** argv) {

    random_array_t* random_array = random_array_ctor(64, 150, 200); 
    int rn;
    int random_array[rn],i;
    for(i=0,i<rn;++)
    random_array[i]=random_array_ctor(64,150,200);
    random_array_print(random_array); 
    printf(random_array);
    printf("Median: %d\n", random_array_get_median(random_array)); 
    printf(random_array_get_median(random_array));
    random_array_sort(random_array); 
    
    random_array_print(random_array); 
    printf(random_array);
    random_array_dtor(random_array); 

    return EXIT_SUCCESS; 
}
