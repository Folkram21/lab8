#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    int N;
    double sum = 0.0;
    int sign = 1;

    // ввод N
    printf("Введите N (N < 10): ");
    scanf("%d", &N);

    printf("Значение знакопеременного выражения = ");

    // цикл от 1 до N
    for (int i = 1; i <= N; i++) {

        // формируем число (1 + i/10.0 = 1.1, 1.2 и т.д.)
        double term = 1.0 + i / 10.0;

        // умножаем на текущий знак и прибавляем к сумме
        sum += sign * term;

        // Меняем знак на противоположный
        sign = -sign;
    }

    printf("%.2f\n", sum);

    return 0;
}
