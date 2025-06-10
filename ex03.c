#include <stdio.h>
#include <string.h>

int main(){
    char A[100];
    char B[100];
    char C[100];
    char D[100];
    int i = 0;
    int j = 0;


    printf("Digite a String: ");
    fgets(A, sizeof(A), stdin);
    printf("Digite a palavra a modificar: ");
    fgets(B, sizeof(B), stdin);
    printf("Digite a nova palavra: ");
    fgets(C, sizeof(C), stdin);

    A[strlen(A)-1] = '\0';
    B[strlen(B)-1] = '\0';
    C[strlen(C)-1] = '\0';

    int lenA = strlen(A);
    int lenB = strlen(B);
    int lenC = strlen(C);


    while(i < lenA){
        if(strncmp(&A[i], B, lenB) == 0){
            strcpy(&D[j], C);
            i += lenB;
            j += lenC;
        }
        else{
            D[j] = A[i];
            i++;
            j++;
        }

    }
    
    D[j] = '\0';
    printf("A string final com alteracoes eh: %s", D);
    return 0;
}