#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        sum += pow(i, i);
    }
    
    printf("The sum of powers from 1 to %d is %.0lf\n", n, sum);
    
    return 0;
}
OUTPUT:
Enter the value of n: 5
The sum of powers from 1 to 5 is 3413
