// Aula2910_Repetições.cpp : Defines the entry point for the console application.
//

#include"stdafx.h"
#include<stdlib.h>




int LerValorInteiro()
{
	int valor = 0;
    printf("Favor Digitar um Numero Inteiro: ");
	scanf_s("%i", &valor);
    return valor;

}


void ImprimirSequencialEntreInteiros()
{
	int n1 = LerValorInteiro();
	int n2 = LerValorInteiro();

	if (n1 <= n2)
	{
		int valorfinal = n2 - 1;
		while (n1 < valorfinal)
		{
			n1++
				printf("%i\t", n1);


		}



	}



}
