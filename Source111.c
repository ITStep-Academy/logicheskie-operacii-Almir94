#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main() {
	setlocale(LC_ALL, "russian");
	int a, b, c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	printf("%d", (a % 5 == 0) + (b % 5 == 0) + (c % 5 == 0)==1);
	return 0;
}