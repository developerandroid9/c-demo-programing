#include<stdio.h>

#include "functions.h"
#include "pointer_functions.h"
void find_factorial(void);
void find_addres_by_pointer(void);
void sum_offibonacii_series(void);
void finsSundOfNumber(void);
void swap_two_numbers(void);
void min_max(void);
void find_dynamic_allocation(void);
int main(){
   // find_factorial();
   // find_addres_by_pointer();
    //sum_offibonacii_series();
    //finsSundOfNumber();
     //swap_two_numbers();
   // min_max();
    find_dynamic_allocation();
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
    printf("Address of %d is %d\n", &n, &add);

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


