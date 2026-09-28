#include<stdio.h>
#include<locale.h>
#define D 2.54
#define P 2.32166
int main() {
	setlocale(LC_ALL, ".UTF8");
	int pulgada;
	int dym;
	float otvet;
	float result;
	printf("Введите значение дюйма ");
	scanf_s("%d", &dym);
	printf("\nВведите значение пульгады ");
	scanf_s("%d", &pulgada);
	otvet = pulgada * P;
	result = dym * D;
	printf("%d дюймов - это %.2f см\n", dym, result);
	printf("%d пульгад - это %.2f см", pulgada, otvet);
	return 0;
}