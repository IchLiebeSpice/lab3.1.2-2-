// lab3.1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int main()
{

	int mass[15];
	srand((unsigned)time(NULL));
	for (int j = 0; j < 15; j++)
	{
		mass[j] = rand() % 200 - 99;
		printf("mass[%i]=%i\n", j, mass[j]);
	}
	int min = mass[0];
	for (int j = 1; j < 15; j++)
		if (mass[j] < min)
			min = mass[j];
	printf("Minimalnoe Znachenie = %d\n", min);
	int Xn, Xk;
	for (int j = 0; j < 15; j++)
		if (mass[j] >= 0)
		{
			Xn = j;
			break;
		}
	for (int j = 14; j >= 0; j--)
		if (mass[j] >= 0)
		{
			Xk = j;
			break;
		}
	int sum(0);
	for (Xn; Xn <= Xk; Xn++)
		sum += mass[Xn];
	printf("Summa elementov megdu pervym i posledniim pologitelnym elementom= %d\n", sum);
	getchar();
	return 0;
}
