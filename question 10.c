#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (i = 2; i <= n; i += 2) {
        sum += i * i;
    }
    
    printf("The sum of squares of even numbers from 2 to %d is %d\n", n, sum);
    
    return 0;
}


OUTPUT:
Enter the value of n: 5
The sum of squares of even numbers from 2 to 5 is 20
