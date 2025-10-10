#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

// Задание 0
int Task0() {
	setlocale(LC_CTYPE, "RUS");
	int count;
	char sym;
	char sym2;

	printf("Введите количество символов: ");
	scanf("%d", &count);
	printf("Введите символ для печати: ");
	scanf(" %c", &sym);
	printf("Введите еще символ для печати: ");
	scanf(" %c", &sym2);

	for (int start = 1; start <= count; start++) {
		putchar(sym);
	}
	printf("\n");
	// *) С символом '+' в начале и конце
	printf("С символом '+' в начале и конце: ");
	putchar('+');
	for (int i = 1; i <= count; i++) {
		putchar(sym);
	}
	putchar('+');
	printf("\n");

	// **) напечатайте полстроки одним символом, а вторую половину другим
	printf("полстроки одним символом, а вторую половину други: ");
	for (int i = 1; i <= count / 2; i++) {
		putchar(sym);
	}
	for (int i = 1; i <= count / 2 + 1; i++) {
		putchar(sym2);
	}
	printf("\n");

	// ***) печатайте после каждого символа восклицательный знак!
	printf("Восклицательный знак: ");
	for (int i = 1; i <= count; i++) {
		putchar(sym);
		putchar('!');
	}
	printf("\n");
	return 0;
}

// Задание 1
int Task1() {
	setlocale(LC_CTYPE, "RUS");
	int n, m;
	int s = 0;
	int k = 1;

	printf("Введите значение m: ");
	scanf("%d", &m);
	printf("Введите значение n(должно быть меньше n) : ");
	scanf("%d", &n);

	for (int i = m; i >= n; i--) {
		s += i;
		printf("выполнено %d раз; ", k++);
	}
	printf("результат %d", s);
	return 0;
}
// Задание 1А
int Task1A() {
	setlocale(LC_CTYPE, "RUS");
	double n;
	int k = 1024;
	printf("Введите значение степени (n): ");
	scanf("%lf", &n);
	for (double i = 0; i <= n; i += 0.1) {
		printf("Результат: 2 * %4d = %8.1f\n" ,k, k * i);
	}
}
// Задание 2 - вар 5
int Task2() {
	setlocale(LC_CTYPE, "RUS");
	double start = 0.1;
	double end = 2.2;
	double step;
	double x, y;

	printf("Введите значение шага табуляции: ");
	scanf("%lf", &step);

	if (step > (end - start)) {
		printf("Шаг слишгом большой для заданного интервала![0.1;2.2]\n");
		return 1;
	}

	printf("\n");
	printf("__________________\n");
	printf("|  x  |   f(x)   |\n");
	printf("__________________\n");

	for (x = start; x <= end + 1e-9; x += step) {
		y = pow(x, 2) - pow(cos(x + 1), 2);
		printf("| %4.2f | %7.4f |\n", x, y);
	}
	printf("__________________\n");
	return 0;
}

// Задание Рамочка
int Ram() {
	setlocale(LC_CTYPE, "RUS");
	int d;
	int s;
	int j = 0;
	setlocale(LC_CTYPE, "RUS");
	printf("Введите длину рамочки: ");
	scanf("%d", &d);
	printf("Введите ширину рамочки: ");
	scanf("%d", &s);
	for (int i = 0; i <= d; i += 1) {
		putchar('-');
	}
	printf("\n");
	for (int i = 0; i < s; i += 1) {
		putchar('|');
		for (int j = 0; i < d - 2; j += 1) {
			putchar(' ');
		}
		putchar('|');
		printf("\n");
	}
	for (int i = 0; i <= d; i += 1) {
		putchar('-');
	}
}

// Задание 3 - ДЗ (17 вариант)
int Task3() {
	setlocale(LC_CTYPE, "RUS");

	double x;
	double sum = 0.0;
	int n;

	printf("Введите значение sin [-1;1]: ");
	scanf("%lf", &x);
	printf("Введите последнюю нужную степень для sin(x): ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		double term = sin(pow(x, i));
		sum += term;
		printf("sin(x^%d) = %.6f\n", i, term);
	}
	printf("Сумма = %.6f\n", sum);

	return 0;
}


void main() {
	Task3();
}
