#include<stdio.h>
#include <stdlib.h>

#include "functions.h"
#include "pointer_functions.h"
#include "arrays-header.h"
#include "struct-header.h"

void find_factorial(void);
void find_addres_by_pointer(void);
void sum_offibonacii_series(void);
void finsSundOfNumber(void);
void swap_two_numbers(void);
void min_max(void);
void find_dynamic_allocation(void);
void get_string_length(void);
void copy_one_string(void);
void find_char(void);

/*Arrays Examples*/
void input_output_array();
void find_min_max_array(void);
void find_sum_average_array(void);
void reverse_of_array(void);
void search_by_linear(void);
void sort_by_bubble(void);
void sorting_by_selection(void);
void sorting_by_insertion(void);

void struct_print(void);
void struct_print_array(void);
int main(){
   // find_factorial();
   // find_addres_by_pointer();
    //sum_offibonacii_series();
    //finsSundOfNumber();
     //swap_two_numbers();
   // min_max();
   // find_dynamic_allocation();
    //get_string_length();
    //copy_one_string();
    //find_char();
    //input_output_array();
    //find_min_max_array();
    //find_sum_average_array();
    //reverse_of_array();
    //search_by_linear();
    //sort_by_bubble();
   // sorting_by_selection();
    //sorting_by_insertion();
    //struct_print();
    struct_print_array();
return 0;
}

void find_factorial() {
    int n;
    printf("Enter a number for factorial \n");
    scanf("%d", &n);
    int result = factorial(n);
    printf("Factorial of %d is %d\n", n, result);
}
void find_addres_by_pointer() {
    int n;
    printf("Enter a number for pointer to address \n");
    scanf("%d",&n);
    int *ptr;
    ptr=&n;
    int add =findAddress_of_numbers(ptr);
    //printf("Address of %d is %d\n", &n, &add);

}
void sum_offibonacii_series() {
    int n;
    printf("Enter a number for fibonacii series \n");
    scanf("%d", &n);

        int sum =  _find_fibonacii_series(n);
        printf("Sum of %d is %d\n",n,sum);

}
void finsSundOfNumber() {
    int n;
    printf("Enter a number for sund number \n");
    scanf("%d", &n);
    int result = find_sum_of_number(n);
    printf("Sum of %d is %d\n",n,result);

}
void swap_two_numbers() {
    int n1, n2;
    printf("Enter two numbers \n");
    scanf("%d %d", &n1, &n2);
    swaptwoNumbers(&n1, &n2);
    printf("N1=%d N2=%d\n", n1, n2);
}
void min_max() {
    int n[]={3,4,5,6,78,66,88};
    int *res;
    res=findMinMax(n,n[0]);
    printf("Min=%d max=%d\n", res[0], res[1]);
}
void find_dynamic_allocation() {
    int n;
    printf("Enter any number \n");
    scanf("%d",&n);
    int *arr=dynamic_allocation_of_array(n);
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}
void get_string_length() {
    char str[100];
    printf("Enter any character");
    scanf("%s",str);
    char *p=str;
    int len=find_string_length(p);
    printf("Length of string is %d\n",len);

}
void copy_one_string() {
    char str[100];
    printf("Enter any character\n");
    scanf("%s",str);
    char *p=str;
    char *copy=copy_string(p);
    printf("The string is %s\n",copy);
}
void find_char() {
   // char str[100];
    char c;
   // printf("Enter any Word\n");
   // scanf("%s",str);
    printf("Enter any char to find \n");
    scanf("%s",&c);
    char *strPtr="SUNEEL";
    char findChar =search_string(strPtr,&c);
    if(findChar=='\0') {
        printf("Not found\n");
    }else {
        printf("found char is %c", findChar);
    }



}
/*Example of arrays*/
void input_output_array() {
    int size;
    printf("Enter any size of array \n");
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++) {
        printf("Enter any element at %d \n",i);
        scanf("%d",&arr[i]);
    }
    int *arrPtr=input_output_of_array(arr,size);
    for (int i=0;i<size;i++) {
        printf("%d ",*(arrPtr+i));
    }
    arrPtr=NULL;
    free(arrPtr);
}
void find_min_max_array() {
    int size;
    printf("Enter any size of array \n");
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++) {
        printf("Enter any element at %d \n",i);
        scanf("%d",&arr[i]);
    }
    int *minMax=findMinMax(arr,size);
   printf("Min=%d Max=%d\n", *(minMax+0), *(minMax+1));
    minMax=NULL;
   free(minMax);
}
void find_sum_average_array() {
    int size;
    printf("Enter any size of array \n");
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++) {
        printf("Enter any element at %d \n",i);
        scanf("%d",&arr[i]);
    }
    int *sumAvg=find_sum_average(arr,size);
    for (int i=0;i<2;i++) {
        printf("%d \n",*(sumAvg+i));
    }
}
void reverse_of_array() {
    int size;
    printf("Enter any size of array \n");
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++) {
        printf("Enter any element at %d \n",i);
        scanf("%d",&arr[i]);
    }
    int *arrPtr=reverse_array(arr,size);
    for (int i=0;i<size;i++) {
        printf("%d ",*(arrPtr+i));
    }
}
void search_by_linear() {
    int size,value;
    printf("Enter any size of array \n");
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++) {
        printf("Enter any element at %d \n",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter any value to search \n");
    scanf("%d",&value);
    int result=linear_search(arr,size,value);
    if(result==-1) {
        printf("Element not found\n");
    }else {
        printf("Element found %d\n",result);
    }
}
void sort_by_bubble() {
    int size;
    printf("Enter any size of array \n");
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++) {
        printf("Enter any element at %d \n",i);
        scanf("%d",&arr[i]);

    }
    int *result=bubble_sorting(arr,size);
    for (int i=0;i<size;i++) {
        printf("%d ",*(result+i));
    }
}
void sorting_by_selection() {
    int size;
    printf("Enter any size of array \n");
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++) {
        printf("Enter any element at %d \n",i);
        scanf("%d",&arr[i]);
    }
    int *result=selection_sorting(arr,size);
    for (int i=0;i<size;i++) {
        printf("%d ",*(result+i));
    }
}
void sorting_by_insertion() {
    int size;
    printf("Enter any size of array \n");
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++) {
        printf("Enter any element at %d \n",i);
        scanf("%d",&arr[i]);
    }
    int* result=insertion_sort(arr,size);
    for (int i=0;i<size;i++) {
        printf("%d ",*(result+i));

    }
}
void struct_print() {
    Student student;
    printf("Enter Student Id\n");
    scanf("%d",&student.id);
    printf("Enter Student Name\n");
    scanf("%s",&student.name);
    printf("Enter Student Address\n");
    scanf("%s",&student.address);
    studentDetails(student);

}
void struct_print_array() {
    StudentPointer student[5];
    for (int i=0;i<5;i++) {
        printf("Enter Student %dth Id \n", i+1);
        scanf("%d",&student[i].id);
        printf("Enter Student %dth name \n", i+1);
        scanf("%s",&student[i].name);
        printf("Enter Student %dth address \n", i+1);
        scanf("%s",&student[i].address);
    }
    setStudentDetails(student);
}

