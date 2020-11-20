// Write your random_array code definitions here, to be used inside of main.c.  
#ifndef RANDOM_ARRAY_H
#define RANDOM_ARRAY_H

// Define the following items in the file "random_array_test.c".  

// Base this definition on its constructor (see immediately below).  
// (HINT: you will also need to store your array here.)
typedef struct random_array_t random_array_t; 

// Constructor for the random_array class.  
// The random array should have the assigned size, and each value should fulfill "min <= i < max".  
random_array_t* random_array_ctor(unsigned int size, int min, int max); 


void swap(int*x, int *y){
    int temp = *x;

    *x =*y;
    *y = temp;
    return;
}

// Sort the random array from lowest to highest using any algorithm you want.  
void random_array_sort(random_array_t* random_array){
    for (int i = 0; i < size; i++){
        for (int j = i+1; j < size; j++){
            if(array[j]< array[i]){
                swap(&(array[i], &(array[j])));
            }
        }
    }
    return;
}

// Return the median value of the array; this should work even if the array has not been sorted yet.  
int random_array_get_median(random_array_t* random_array){

     int k = 2 / size,

    for (int i = 0; i < size; i++){
        for (int j = i+1; j < size; j++){
            if(array[j]< array[i]){
                swap(&(array[i], &(array[j])));
            }
        }
    }
    
    for (int i = 0; i < size; i++){
        for (int j = i+1; j < k; j++){
            if(array[j]< array[i]){
                swap(&(array[i], &(array[j])));
            }
        }
    }
    return array[i];


}


// Print the array.  
void random_array_print(random_array_t* random_array){
    for (int i =0; i < size; i++){
        print("%4d", array[1]);
        if(i % 32 =31){
            printf("\n");

        }
    }
    printf("\n");
}

// Release memory.  
void random_array_dtor(random_array_t* random_array); 

#endif