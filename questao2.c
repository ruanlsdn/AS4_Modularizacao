#include <locale.h>
float calculaLucro(float preco);
main (){
	setlocale (LC_ALL,"");
	float preco, precoNovo;
	printf ("Digite o preco do produto: ");
	scanf ("%f", &preco);
	precoNovo = calculaLucro(preco);

	printf ("O pre�o digitado foi de %.2f, e o pre�o com lucro � de %.2f", preco, precoNovo);
}

float calculaLucro(float preco){
	float porcent, precoNovo;
	porcent=(preco*30)/100;
	precoNovo=preco+porcent;
	return precoNovo;
}


