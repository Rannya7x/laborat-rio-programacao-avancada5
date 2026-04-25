#ifndef QUEBRA_SENHAS_H
#define QUEBRA_SENHAS_H
#include "string.h"
extern int tamanhoMaximo;
extern char caracteres[];
void gerar_palavras_recursivo(char *atual, int posicao, int profundidade);
int verifica_senha(char *senha_teste, char *senha_criptografada);
#endif