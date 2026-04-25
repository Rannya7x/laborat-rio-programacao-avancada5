//como comentar varias linhas de código
#include <stdio.h>
#include "verifica_senha.h"

int tamanhoMaximo = 5;
char caracteres[]= "0123456789";
char* senhaCriptografada = "$6$l2xE4w9twgjtnZBz$9YK9krslZFraLffy5VNiahAfT.xZNvB54j91DMCMIoVFvj335ZKxb11qgVMn.KzU2GqVPPyS2FTBqPSciYq761";

int main() {
	
	char palavra[tamanhoMaximo + 1];

	//loop para gerar palavras de tamanho 1 a tamanhoMaximo
	for(int i = 1; i <= tamanhoMaximo; i ++){
		gerar_palavras_recursivo(palavra, 0, i);
	}


	return 0;
}
