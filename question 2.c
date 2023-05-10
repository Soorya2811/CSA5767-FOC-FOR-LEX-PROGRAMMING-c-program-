#include <stdio.h>

int main() {
    int limit, i;
    
    printf("Enter the limit of the series: ");
    scanf("%d", &limit);
    
    printf("Even Number Series: ");
    for (i = 2; i <= limit; i += 2) {
        printf("%d ", i);
    }
    
    return 0;
}

OUTPUT:
Enter the limit of the series: 10
Even Number Series: 2 4 6 8 10 
