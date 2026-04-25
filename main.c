//como comentar varias linhas de código
#include <stdio.h>
#include "quebra_senha.h"

int tamanhoMaximo = 3;
char caracteres[]= "abc";

int main() {
	
	char palavra[tamanhoMaximo + 1];

	//loop para gerar palavras de tamanho 1 a tamanhoMaximo
	for(int i = 1; i <= tamanhoMaximo; i ++){
		gerar_palavras_recursivo(palavra, 0, i);
	}


	return 0;
}
