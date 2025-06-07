#include <stdio.h>
#include <string.h>


int main(){
    char nome[100];
    
    fgets(nome, sizeof(nome), stdin);

    for(int i=0; i<(int)strlen(nome); i++){
        if(nome[i] == ' '){
            nome[i+1] = nome[i+1] - 32;
        }
    }

    printf("%s", nome);



    return 0;
}