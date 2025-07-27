#include "pointer_functions.h"

#include<stdlib.h>

extern int findAddress_of_numbers(int *ptr) {
    int *address =  ptr;
    return (int)address;
}
extern void swaptwoNumbers(int *first, int *second) {
    int address = *first;
    *first=*second;
    *second=address;
}
extern int* findMinMax(int *datas, int first) {
    int min=first;
    int max=0;
    int arr[2];

    for (int i = 0; i < 7; i++) {
        if (min>datas[i]) {
              min=datas[i];
        }
        if (max<datas[i]) {
            max = datas[i];
        }
    }

    arr[0]=min;
    arr[1]=max;
    return arr;
}
extern int* dynamic_allocation_of_array(int length) {
    int *arr=malloc(length*sizeof(int));
    if (arr==NULL) {
        return NULL;
    }
    for (int i = 0; i < length; i++) {
        arr[i]=(i+1)*10;
    }

    return arr;

}