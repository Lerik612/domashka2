#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, ".UTF-8");

	double litr;
	const double mol_mass = 3.0e-23;
	const double litr_mass = 950.0;
	double all_mass;
	double all_mol;

	puts("Введите количество литров воды");
	(void)scanf("%lf",&litr);

	all_mass = litr * litr_mass;
	all_mol = all_mass / mol_mass;
	 
	printf("\n-- - Результат-- - \n");
	printf("Введено литров: %.2lf\n", litr);
	printf("Общая масса воды: %.2lf г\n", all_mass);
	printf("Общее количество молекул: %e\n", all_mol);
	return 0;
}