#include <stdio.h>

int main() {
    int limit, i;
    
    printf("Enter the limit of the series: ");
    scanf("%d", &limit);
    
    printf("Number Series: ");
    for (i = 1; i <= limit; i++) {
        printf("%d ", i);
    }
    
    return 0;
}

output:
Enter the limit of the series: 10
Number Series: 1 2 3 4 5 6 7 8 9 10 
