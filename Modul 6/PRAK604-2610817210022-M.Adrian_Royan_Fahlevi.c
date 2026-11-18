#include <stdio.h>
#include <string.h>

int main() {
    char code[100], message[100];
    fgets(code, sizeof(code), stdin);
    fgets(message, sizeof(message), stdin);
    code[strcspn(code, "\n")] = 0;
    message[strcspn(message, "\n")] = 0;

    if (strlen(code) != strlen(message)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    } else {
        int star = 0, hash = 0;
        int len = strlen(code);
        char result[len + 1];

        for (int i = 0; i < len; i++) {
            if (code[i] == ' ' && message[i] == ' ') {
                result[i] = ' ';          // spasi cocok: tampilkan spasi, tidak dihitung
            } else if (code[i] == message[i]) {
                result[i] = '*';
                star++;
            } else {
                result[i] = '#';
                hash++;
            }
        }
        result[len] = '\0';

        printf("%s\n* = %d\n# = %d\n", result, star, hash);
        if (star >= hash) printf("Pesan Asli\n");
        else printf("Pesan Palsu\n");
    }
    return 0;
}