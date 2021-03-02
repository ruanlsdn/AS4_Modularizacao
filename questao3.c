float calculaPesoIdeal(float alt);
void imprimeMensagem(float kg, float pesoIdeal);
main () {
	float kg, alt, pesoIdeal;
	printf ("Digite o peso: ");
	scanf ("%f", &kg);
	printf ("Digite a altura: ");
	scanf ("%f", &alt);
	pesoIdeal = calculaPesoIdeal(alt);
	imprimeMensagem(kg, pesoIdeal);
}

float calculaPesoIdeal(float alt) {
	float peso;
	peso=(alt-1.10)*100;
	return peso;
}

void imprimeMensagem(float kg, float pesoIdeal) {
	if (kg>pesoIdeal) {
		printf ("Acima do peso!");
	} else if (kg<pesoIdeal) {
		printf ("Abaixo do peso!");
	} else {
		printf ("Peso ideal!");
	}
}
