#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, ".UTF8");
	int num;
	int numm;
	puts("введите число");
	scanf_s("%d", &num);
	printf("Введено число %d\n", num);
	printf("введите число\n");
	scanf_s("%d", &numm);
	printf("Сумма: %d + %d = %d\n", numm, num, numm + num);
	printf("Разность: %d - %d = %d\n", num, numm, num - numm);
	printf("Произведение: %d * %d = %d\n", num, numm, num * numm);
	printf("Частное: %d/%d=%d\n", numm, num, numm / num);
	printf("Остаток: %d%%%d=%d\n", numm, num, numm % num);
	return 0;
}