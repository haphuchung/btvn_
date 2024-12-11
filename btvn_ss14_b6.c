#include <stdio.h>

int main() {
    char str[100]; 
    int count = 0; 
    
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin); 

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++; 
        }
    }

    printf("So ky tu la chu cai trong chuoi la: %d\n", count);

    return 0;
}
