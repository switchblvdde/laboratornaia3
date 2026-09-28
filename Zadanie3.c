#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, ".UTF8");
	float A, B;
	float przv, sum, ruz;
	printf("Введите число A\n");
	scanf_s("%f", &A);
	printf("Введите число B\n");
	scanf_s("%f", &B);
	przv = A * B;
	sum = A + B;
	ruz = A - B;
	printf("| %-15s | %-15s | %-15s |\n", "A * B", "A + B","A - B");
	printf("|%-8.2f*%-8.2f|%-8.2f+%-8.2f|%-8.2f-%-8.2f|\n", A, B, A, B, A, B);
	printf("|%-17.2f|%-17.2f|%-17.2f|",przv,sum,ruz);
	return 0;	
}
