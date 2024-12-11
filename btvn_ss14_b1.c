#include <stdio.h>

int main() {
    char str[100]; 
    int length = 0; 

    printf("Nhap mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin); 

    while (str[length] != '\0') {
        if (str[length] == '\n') {
            str[length] = '\0'; 
            break;
        }
        length++;
    }

    printf("Chuoi vua nhap: \"%s\"\n", str);
    printf("Do dai cua chuoi: %d\n", length);

    return 0;
}
