#include <stdio.h>

int main() {
    int limit, i;
    long long int fib1 = 0, fib2 = 1, nextTerm;
    
    printf("Enter the limit of the Fibonacci series: ");
    scanf("%d", &limit);
    
    printf("Fibonacci Series: ");
    
    for (i = 1; i <= limit; ++i) {
        printf("%lld ", fib1);
        
        nextTerm = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextTerm;
    }
    
    return 0;
}
OUTPUT :
Enter the limit of the Fibonacci series: 10
Fibonacci Series: 0 1 1 2 3 5 8 13 21 34 
