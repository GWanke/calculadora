#include <stdio.h>

double soma(double x, double y){
	return x+y;
}
double sub (double x, double y){
	return x-y;
}

double mul (double x, double y){
	return x*y;
}
double div (double x, double y){
	return x/y;
}
int main(){
	int a,b;
	char sinal;
	scanf ("%d %c %d",&a, sinal, b);
	if (sinal=="+")
		soma(a,b);
	else if (sinal=="-")
		sub (a,b);
	else if (sinal=="*")
		mul (a,b);
	else if (sinal=="/")
		div (a,b);
	else 
		printf ("Sinal invalido");
	return 0;
}