#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        sum += i;
    }

    printf("The sum of even numbers up to %d is: %d\n", n, sum);

    return 0;
}


OUTPUT:
Enter the value of n: 20
The sum of even numbers up to 20 is: 110
