
#include <stdio.h>
#include <stdlib.h>

static int N = 1000;

int* initialize_array(int size){
    int *arr =  malloc(sizeof(int) * size);
    for(int i = 0; i < size; i++){
        arr[i] = rand() % (N + 1);
    }
    return arr;
}

void print_array(int* arr, int size){
    for(int i = 0; i < size; i++){
        printf(" [%d] ", arr[i]);
    }
    printf("\n");
}



void insertSort(int* arr){




}


int main(){
    int *array = initialize_array(5);
    print_array(array, 5);
}