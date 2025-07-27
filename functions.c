#include "functions.h"

extern int factorial(int n) {
    if (n<=1)
        return 1;
    const int result = n * factorial(n - 1);
    return result;
}
extern int _find_fibonacii_series(int n) {//2 1

     if (n==1)
        return 1;
    return _find_fibonacii_series(n - 1)+_find_fibonacii_series(n - 2);

}
extern int find_sum_of_number(int n) {
    if (n<=1)
        return 1;
    const int result = n + find_sum_of_number(n - 1);
    return result;
}
//6^2=6*6
//n*exp(exp-1);