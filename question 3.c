#include <stdio.h>

int main() {
    int limit, i;
    
    printf("Enter the limit of the series: ");
    scanf("%d", &limit);
    
    printf("Odd Number Series: ");
    for (i = 1; i <= limit; i += 2) {
        printf("%d ", i);
    }
    
    return 0;
}
OUTPUT:
Enter the limit of the series: 10
Odd Number Series: 1 3 5 7 9 
