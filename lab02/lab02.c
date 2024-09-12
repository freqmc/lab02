#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS
void z1() {
	setlocale(LC_ALL, "RUS");
	printf("123\n");
	printf("1\n2\n3\n");
	printf("\t1\n\t\t2\n\t\t\t3\n");
	printf("%d %d %d %d", 1, 2, 3, 4);
	printf("%10.5f\n", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("Остаток от деления %d на %d равен %d\n ", 2000, 4, 2000 % 4);
	printf("%g разделить %e равно %f\n ", 5., 2., 5. / 2);
	printf("%d разделить %d равно %d\n ", 5., 2., 5. / 2);
	printf("%g разделить %g равно %g\n ", 5., 2., 5. / 2);
	printf("%f разделить %f равно %f\n ", 5., 2., 5. / 2);
	printf("%e разделить %e равно %e\n ", 5., 2., 5. / 2);
}

int z2() {
	int N, K;
	float a, b;
	/*scanf_s("%d %d", &N, &K);*/
	N = 14;
	K = 51;
	a = N;
	b = K;
	setlocale(LC_ALL, "RUS");
	printf("Сейчас % d часов % d минут 00 секунд\n", N, K);
	printf("Идет % d минута суток\n", N * 60 + K);
	printf("До полуночи осталось %d часов и %d минут\n", 24 - N, 60 - K);
	printf("С 8.00 прошло %d секунд\n", N * 3600 + K * 60);
	printf("Текущий час = %1.2f суток  и текущая минута = %1.2f часа»", a / 24, b / 60);
}

int z3() {
	int n, L, a, b;
	scanf_s("%d %d", &n, &L);
	/*scanf_s("%d %d", &a, &b);*/
	setlocale(LC_ALL, "RUS");
	printf("Дано:\n\t%d\n\t%d\n\t______________\nОтвет:\n\t+%f", n, L, n/L, n%L);
}
int main() {
	/*z1();*/
	z2();
	/*z3();*/
}