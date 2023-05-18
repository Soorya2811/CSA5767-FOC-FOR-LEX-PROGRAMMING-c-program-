#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    printf("\nBefore swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    // Swapping the values
    int temp = a;
    a = b;
    b = c;
    c = temp;

    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}


OUTPUT 
Enter the value of a: 7
Enter the value of b: 5
Enter the value of c: 8
Before swapping:
a = 7
b = 5
c = 8

After swapping:
a = 5
b = 8
c = 7
