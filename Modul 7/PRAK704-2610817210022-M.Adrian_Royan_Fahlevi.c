#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main() {
    char teks[200];

    fgets(teks, sizeof(teks), stdin);
    teks[strcspn(teks, "\n")] = '\0';

    if (strlen(teks) > 20) {
        teks[20] = '\0';
        printf("%s...\n", teks);
    } else {
        printf("%s\n", teks);
    }

    return 0;
}