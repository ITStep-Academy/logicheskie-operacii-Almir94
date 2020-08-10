#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main() {
	setlocale(LC_ALL, "russian");
	float a, b, c, d;
	printf("введите два числа:");
	scanf_s("%f%f", &a, &b);
	printf("введите два числа:");
	scanf_s("%f%f", &c, &d);

	printf("%d", a / b < c / d);

	return 0;
}