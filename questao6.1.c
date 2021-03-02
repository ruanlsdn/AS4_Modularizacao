float calcPreco(float preco[], int cont);
float calcMedia(float preco[], int cont);
void apresentaProduto(float preco[], int cont, int cod[]);
main () {
	float preco[100], novoPreco[100], mediaP, mediaPN;
	int cod[100], cont=0;
	do {
		printf ("Digite o codigo: ");
		scanf ("%d", &cod[cont]);
		if (cod[cont]<0) {
			break;
		}
		printf ("Digite o preco: ");
		scanf ("%f", &preco[cont]);
		novoPreco[cont]=calcPreco(preco, cont);
		cont++;

	} while (cod[cont]>=0);

	mediaP=calcMedia(preco, cont);
	mediaPN=calcMedia(novoPreco, cont);
	apresentaProduto(novoPreco, cont, cod);
	printf ("A media do preco sem aumento: %.2f\n", mediaP);
	printf ("A media do preco com aumento: %.2f\n", mediaPN);
}
float calcPreco(float preco[], int cont){
	float novoPreco;
		novoPreco = (((preco[cont]*20)/100)+preco[cont]);
	return novoPreco;
}

float calcMedia(float preco[], int cont) {
	float somatorio=0, media;
	int i;

	for(i=0; i<cont; i++) {
		somatorio=somatorio+preco[i];
	}

	media=somatorio/cont;

	return media;
}

void apresentaProduto(float preco[], int cont, int cod[]) {
	int i;
	for (i=0; i<cont; i++) {
		printf ("Codigo: %d\nNovo preco: %.2f\n", cod[i], preco[i]);
	}
}
