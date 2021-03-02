float calculaMedia (float n1, float n2, float n3);
main () {
	int opc;
	float n1, n2, n3, media;
	do {
		printf ("Digite a primeira nota: ");
		scanf ("%f", &n1);
		printf ("Digite a segunda nota: ");
		scanf ("%f", &n2);
		printf ("Digite a terceira nota: ");
		scanf ("%f", &n3);
		media = calculaMedia (n1, n2, n3);
		printf ("A media do estudante e: %.2f\n", media);
		printf ("Digite '1' para novo estudante ou qualquer outra tecla para sair: ");
		scanf ("%d", &opc);
	} while (opc==1);
}

float calculaMedia (float n1, float n2, float n3) {
	float media;

	media=(n1+n2+n3)/3;

	return media;
}
