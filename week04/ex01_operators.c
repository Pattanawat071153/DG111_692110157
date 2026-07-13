#include <stdio.h>

int main()
{

    printf("1.1 — Integer Division & Modulo: \n");
    int expression_1 = 10 / 3;
    printf("1. Expression : 10 / 3 = %d\n", expression_1);

    int expression_2 = 10.0 / 3;
    printf("2. Expression : 10.0 / 3 = %d\n", expression_2);

    float expression_3 = 10.0 / 3;
    printf("3. Expression : 10.0 / 3 = %.2f\n", expression_3);

    double expression_4 = 10 % 3;
    printf("4. Expression : 10 %% 3 = %.2f\n", expression_4);

    double expression_5 = -7 % 3;
    printf("5. Expression : -7 %% 3 = %.2f\n", expression_5);

    double expression_6 = 7 % -3;
    printf("6. Expression : 7 %% -3 = %.2f\n", expression_6);

    printf("1.2 — Increment and Decrement: \n");
    int x = 5;
    printf("x++ = %d\n", x++);
    printf("x = %d\n", x);
    x = 5;
    printf("++x = %d\n", ++x);
    printf("x = %d\n", x);

    printf("1.3 — Precedence Test: \n");
    printf("2 + 3 * 4 = %d\n", 2 + 3 * 4);
    printf("(2 + 3) * 4 = %d\n", (2 + 3) * 4);
    printf("10 - 2 - 3 = %d\n", 10 - 2 - 3);
    printf("2*3 + 4*5 = %d\n", 2 * 3 + 4 * 5);

    return 0;
}