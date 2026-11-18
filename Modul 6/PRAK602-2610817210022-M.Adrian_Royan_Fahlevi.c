#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int rooms[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &rooms[i]);
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", rooms[i] * (i + 1));
    }
    printf("\n");
    return 0;
}