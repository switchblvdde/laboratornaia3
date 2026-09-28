#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, ".UTF8");
	int a;
	printf("Введите длину ребра ");
	scanf_s("%d", &a);
	printf("Обьем куба равен %d\n", a * a * a);
	printf("Площадь боковой поверхности равна %d\n",4 * a * a);
	return 0;
}