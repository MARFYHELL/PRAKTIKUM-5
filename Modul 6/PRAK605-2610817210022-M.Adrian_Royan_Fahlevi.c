#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int A[n][n], B[n][n], res[n][n];
    
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) scanf("%d", &A[i][j]);
        
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) scanf("%d", &B[i][j]);
        
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            res[i][j] = 0;
            for(int k=0; k<n; k++) {
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    printf("Matriks AXB\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}