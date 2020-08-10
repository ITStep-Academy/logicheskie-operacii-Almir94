#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main() {
	setlocale(LC_ALL, "russian");
	int a;
	scanf_s("%d", &a);
	printf("%d", a < -10 || a > -1) || (a < 2 || a > 15));
	return 0;
}