float calculaSalario(float sal);
main (){
	float salB, salL;
	printf ("Informe o salario: ");
	scanf ("%f", &salB);
	salL=calculaSalario(salB);
	printf ("O salario liquido e: %.2f", salL);
}

float calculaSalario(float sal){
	float desc1, desc2, salFinal;
	desc1=(sal*10)/100;
	desc2=(sal*5)/100;
	salFinal = sal-desc1-desc2;
	return salFinal;
}
