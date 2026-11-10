#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    double x, h, y;
    double start = 0.1;
    double end = 2.2;

    printf("Функция: y = x^2 - cos^2(x + 1)\n");
    printf("Диапазон: [%.1f; %.1f]\n", start, end);

    printf("Введите шаг табуляции (h): ");
    scanf("%lf", &h);

    if (h <= 0) {
        printf("Ошибка: шаг должен быть больше нуля!\n");
        return 1;
    }

    printf("\n -------------------\n");
    printf("|    x    |  f(x)   |\n");
    printf(" -------------------\n");

    for (x = start; x <= end + 1e-9; x += h) {

        y = x * x - cos(x + 1) * cos(x + 1);

        printf("| %7.2f | %7.3f |\n", x, y);
    }

    printf(" -------------------\n");

    return 0;
}
