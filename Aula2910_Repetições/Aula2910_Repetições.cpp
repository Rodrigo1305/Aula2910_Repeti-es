// Aula2910_Repetições.cpp : Defines the entry point for the console application.
//

#include"stdafx.h"
#include<stdlib.h>
#include <iostream>



int LerNumeroInteiro()
{
	int a;

	printf("Favor digitar um numero inteiro: ");
	scanf_s("%i", &a);

	return a;
}


void DetectarValoresEmOrdem()
{
	int i = 0;
	int anterior = 0, numero = 0;
	int crescente = 1; 

	while (i < 5)
	{
		numero = LerNumeroInteiro();

		if (i != 0)
		{
			if (anterior >= numero)
			{
				crescente = 0;
			}

		}

		anterior = numero;
		i++;
	}

	if (crescente == 1)
	{
		printf("Esta em ordem crescente");
	}
	else
	{
		printf("Nao esta em ordem crescente");
	}

}


int main()
{

	//while (true) 
	//{
		//printf("a");
//	}

	int a = 0;
	while (a < 5)
	{
		printf("%i\t", a);
		a++; 
	}

	printf("\n\n");

	a = 0;

	while (a <= 5)
	{
		printf("%i\t", a);
		a++; 
	}

	printf("\n\n");

	do
	{
		a++; 
	printf("%i\t", a);
	} while (a <= 5);



	DetectarValoresEmOrdem();




	printf("\n\n\n");
	system("pause");

	return 0;



}
