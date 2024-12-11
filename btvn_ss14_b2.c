#include <stdio.h>

int main() {
    char str[] = "Hello, World!"; 

    printf("Cac ky tu trong chuoi la:\n");
    for (int i = 0; str[i] != '\0'; i++) { 
        printf("%c ", str[i]); 
    }

    printf("\n"); 
    return 0;
}
