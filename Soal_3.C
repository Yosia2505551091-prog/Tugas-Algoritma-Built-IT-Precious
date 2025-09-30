#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char input[1000];
    char words[300][71];
    int count = 0;
    
    scanf("%[^\n]", input);
    
    char *token = strtok(input, " ");
        while (token != NULL){
            int duplicate = 0;
            
            for (int i = 0; i < count; i++) {
                if (strcmp(words[i], token) == 0) {
                    duplicate = 1;
                    break;
                }
            }
            if (!duplicate) {
                strcpy(words[count], token);
                count++;
            }
            token = strtok(NULL, " ");
        }
    for(int i = 0; i < count; i++) {
        if (i > 0) printf(" ");
        printf("%s", words[i]);
    }
    printf("\n");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
