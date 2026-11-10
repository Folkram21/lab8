#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    int n;
    long long power = 1;

    printf("Введите степень n: ");
    scanf("%d", &n);

    printf("--- Вывод в столбик с выравниванием ---\n");

    for (int i = 0; i <= n; i++) {
        printf("2^%-3d = %-30lld\n", i, power);
        double k = power / 1024.0;
        printf("       Результат: %.1fK\n", k);
        power *= 2;
    }

    return 0;
}
