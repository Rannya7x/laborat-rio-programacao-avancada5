#include "quebra_senha.h"
#include "crypt.h"
#include <stdio.h>

void gerar_palavras_recursivo(char *atual, int posicao,int profundidade){
    //caso base: a palavra atingiu o tamanho atual 
    if (posicao == profundidade){
        atual[posicao] = '\0'; //adiciona o caractere nulo para finalizar a string
        printf("%s\n", atual);  // Exibe a palavra gerada
        return;
    }

    for(int i = 0; i < strlen(caracteres); i++){
        atual[posicao] = caracteres[i]; // caractere atual
        gerar_palavras_recursivo(atual, posicao + 1, profundidade); 
    }
}

int verifica_senha(char *senha_teste, char *senha_criptografada)
{
    return 1;
}