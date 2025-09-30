#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int N;
 scanf("%d", &N);
    
    for (int i = 1; i <= N - 1; i++) {
        for (int j = 1; j <= N - i - 1; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (int j = 1; j <= N - 2; j++) {
        printf(" ");
    }
    printf("*\n");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
