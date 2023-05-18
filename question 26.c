#include <stdio.h>

int main() {
    int n, i;
    int max = 0;
    int num;

    printf("Enter the total number of integers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter integer %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    printf("The biggest number is: %d\n", max);

    return 0;
}

OUTPUT 
Enter the total number of integers: 3
Enter integer 1: 5
Enter integer 2: 7
Enter integer 3: 8
The biggest number is: 8
