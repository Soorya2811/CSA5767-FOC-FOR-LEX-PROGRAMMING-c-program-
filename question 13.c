#include <stdio.h>

int main() {
    int n, i, number, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers:\n", n);
    
    for (i = 1; i <= n; i++) {
        scanf("%d", &number);
        sum += number * number * number;
    }
    
    printf("The sum of cubes of %d numbers is %d\n", n, sum);
    
    return 0;
}

OUTPUT:
Enter the value of n: 5
Enter 5 numbers:
1 2 3 4 5
The sum of cubes of 5 numbers is 225
