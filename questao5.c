void descobrePrimo(int num);
main () {
	int num;
	printf ("Digite um numero: ");
	scanf ("%d", &num);
	descobrePrimo(num);
}

void descobrePrimo(int num) {
	int i, flag=0;
	for (i=1; i<=num; i++) {
		if (num % i == 0) {
			
		}
	}
	
	if (flag==2){
		printf ("O numero digitado e primo");
	} else {
		printf ("O numero digitado nao e primo");
	}
}
