#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, ".UTF8");
	int a;
	printf("Введите длину ребра ");
	scanf_s("%d", &a);
	printf("Обьем куба равен %d\n", a * a * a);
	printf("Площадь боковой поверхности равна %d\n",4 * a * a);
	system("pause");
	return 0;
}
------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
#include<locale.h>
int name(int a) {
	int res1;
	res1 = a * a * a;
	return res1;
}
int name1(int a) {
	int res2;
	res2 = 4 * a * a;
	return res2;
}
int main() {
	setlocale(LC_ALL, ".UTF8");
	int a, res1,res2;
	printf("Введите длину ребра ");
	scanf_s("%d", &a);
	res1 = name(a);
	res2 = name1(a);
	printf("Обьем куба равен %d\n", res1);
	printf("Площадь боковой поверхности равна %d\n", res2);
	system("pause");
	return 0;
}
