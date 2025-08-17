#include "pointer_functions.h"

#include <stdio.h>
#include<stdlib.h>
#include <string.h>


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
extern int find_string_length(char *string) {
    int length=1;
    // for (int i = 0; string[i] != '\0'; i++) {
    //     length++;
    // }
    if (*string == '\0') {
        return 0;
    }
    length=length+find_string_length(string+1);
    return length;
}
extern char* copy_string(char *string) {
    char *copy=malloc(strlen(string)+1);
    if (copy==NULL) {
        return NULL;
    }
    for (int i = 0; i < strlen(string); i++) {
        copy[i]=string[i];
    }

    return copy;
}

extern char search_string(const char *string,const char *search) {
    char ch = 0;
    int i=0;
    while (*(string+i) != '\0') {
        if (*(string+i) == *search) {
            ch=string[i];
            break;
        }
       i++;
    }
    return ch;
}