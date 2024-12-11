#include <stdio.h>

int main() {
    char str[100]; // Khai b�o m?ng �? ch?a chu?i, gi?i h?n 100 k? t?.
    int length = 0; // Bi?n �? �?m �? d�i chu?i.

    printf("Nhap mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin); // �?c chu?i t? ng�?i d�ng, bao g?m c? kho?ng tr?ng.

    // Lo?i b? k? t? xu?ng d?ng '\n' n?u c�.
    while (str[length] != '\0') {
        if (str[length] == '\n') {
            str[length] = '\0'; // Thay th? '\n' b?ng '\0'.
            break;
        }
        length++;
    }

    // In chu?i v� �? d�i.
    printf("Chuoi vua nhap: \"%s\"\n", str);
    printf("Do dai cua chuoi: %d\n", length);

    return 0;
}
