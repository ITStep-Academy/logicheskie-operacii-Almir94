#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main() {
	setlocale(LC_ALL, "russian");
	float a, b, c, d;
	printf("������� ��� �����:");
	scanf_s("%f%f", &a, &b);
	printf("������� ��� �����:");
	scanf_s("%f%f", &c, &d);

	printf("%d", a / b < c / d);

	return 0;
}