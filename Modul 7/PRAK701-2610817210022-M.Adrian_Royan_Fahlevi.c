#include <stdio.h>
#include <string.h>

int main() {
    char first[50], last[50];
    printf("Nama Depan: ");
    scanf("%s", first);
    printf("Nama Belakang: ");
    scanf("%s", last);
    
    printf("Nama Lengkap: %s %s\n", first, last);
    printf("Panjang Nama (tanpa spasi): %lu\n", strlen(first) + strlen(last));
    return 0;
}