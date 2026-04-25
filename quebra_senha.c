#include "quebra_senha.h"
#include "crypt.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void gerar_palavras_recursivo(char *atual, int posicao,int profundidade){
    //caso base: a palavra atingiu o tamanho atual 
    if (posicao == profundidade){
        atual[posicao] = '\0'; //add caractere nulo no fim da palavra

        if (verifica_senha(atual, senhaCriptografada) == 0){
            printf("Senha encontrada: %s\n", atual);
            exit(0); // Encerra o programa após encontrar a senha
        } else {
            printf("%s --> não\n", atual);
        }
        return;
    }

    for(int i = 0; i < strlen(caracteres); i++){
        atual[posicao] = caracteres[i]; // caractere atual
        gerar_palavras_recursivo(atual, posicao + 1, profundidade); 
    }
}

int verifica_senha(char *senha_teste, char *senha_criptografada){
    char *hash_gerado = crypt(senha_teste, senha_criptografada);
    return strcmp(hash_gerado, senha_criptografada); //retorna 0 se as senhas forem iguais, caso contrário retorna 1

}