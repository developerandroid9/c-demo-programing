#include <stdlib.h>
#include<stdio.h>
#include "arrays-header.h"

extern int* input_output_of_array(const int array[], int size) {
    int *result= malloc(size*sizeof(int));
    for (int i = 0; i < size; i++) {
        result[i] = array[i];
    }
    return result;

}
extern int* find_min_max(const int array[], int size) {
    int *result= malloc(2*sizeof(int));
    int min=-1,max=-1;
    for (int i = 0; i < size; i++) {
        if (array[i]>max) max=array[i];
        if (array[i]<min ) min=array[i];
    }
    printf ("Min= %d Max= %d\n", min, max);
    result[0]=max;
    result[1]=min;
    printf ("Result= %d\n", *result);
    return result;

}
extern int* find_sum_average(const int array[], int size) {
    int *result= malloc(2*sizeof(int));
    int sum=0;
    int avg=0;
    for (int i = 0; i < size; i++) {
        sum+=array[i];
    }
    avg=sum/size;
    result[0]=avg;
    result[1]=sum;
    return result;
}
extern int* reverse_array(const int array[], int size) {
    int *result= malloc(size*sizeof(int));
    int maxSize=size-1;
    for (int i = 0; i <size; i++) {
        result[maxSize] = array[i];
        maxSize--;
    }
    return result;

}
extern int linear_search(const int array[], int size, int value) {
    int result = -1;//= malloc(size*sizeof(int));
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            result = array[i];
        }
    }
    return result;
}
extern int* bubble_sorting(int* array, int size) {
    for (int i = 0; i < size - 1; i++) {
        // Flag to optimize if array is already sorted
       // int swapped = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap adjacent elements
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
               // swapped = 1;
            }
        }
        // If no elements were swapped in this pass, break early
        //if (!swapped)
          //  break;
    }
    int *result = array;
    return result;

}
extern int* selection_sorting(int* array, int size) {

    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }

    }
    int *result = array;
    return result;
}
extern int* insertion_sort(int* array, int size) {
    for (int i = 0; i < size; i++) {
        int temp = array[i];
        int j = i - 1;
     while (j>=0 && array[j] > temp) {
         array[j+1] = array[j];
         j = j - 1;
     }
        array[j+1] = temp;
    }
    int *result = array;
    return result;
}
