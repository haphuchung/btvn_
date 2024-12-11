#include <stdio.h>

int main() {
    char str[] = "Hello, World!"; 
    char ch; 
    int count = 0; 

    printf("Nhap mot ky tu bat ky: ");
    scanf("%c", &ch); 

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++; 
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi \"%s\".\n", ch, count, str);

    return 0;
}

