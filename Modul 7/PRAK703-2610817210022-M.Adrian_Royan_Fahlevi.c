#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[200];
    int vowels = 0, consonants = 0, i;

    printf("Kalimat : ");
    fgets(sentence, 200, stdin);

    for (i = 0; sentence[i] != '\0'; i++) {
        char c = tolower(sentence[i]);
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            vowels++;
        } else if (c >= 'a' && c <= 'z') {
            consonants++;
        }
    }

    printf("Jumlah Vokal : %d\n", vowels);
    printf("Jumlah Konsonan : %d\n", consonants);
    return 0;
}