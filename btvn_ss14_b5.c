#include <stdio.h>

int main() {
    char str[] = "hello world"; 
    int count = 0; 
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')) {
            count++;
        }
        i++;
    }

    printf("So luong tu trong chuoi la: %d\n", count);

    return 0;
}
