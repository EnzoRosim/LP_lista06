#include <stdio.h>
#include <string.h>

int main() {
    char A[100], B[100], C[100];
    int i_A=0,i_B=0,i_C=0;

    printf("Digite a primeira string: ");
    fgets(A, sizeof(A), stdin);

    printf("Digite a segunda string: ");
    fgets(B, sizeof(B), stdin);

    A[strcspn(A, "\n")] = '\0';
    B[strcspn(B, "\n")] = '\0';

    while(A[i_A] != '\0' || B[i_B] != '\0'){
        if (A[i_B] != '\0') {
            C[i_C] = A[i_A];
            i_C++; 
            i_A++; 
        }

        if (B[i_B] != '\0') {
            C[i_C] = B[i_B];
            i_C++; 
            i_B++; 
    }

    C[i_C] = '\0';

    printf("%s", C);
    
    return 0;
}