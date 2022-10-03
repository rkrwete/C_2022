/* Программа: создать 4 переменных разного типа, продемонстрировать работу четырех
арифметических операторов на выбор */

#include <stdio.h>

int main()
{
    int number1 = 10;
    float number2 = 2.5;
    char sim = '8';
    signed int number3 = -589;
    
    float sum = number1 + number3;
    float mul = number1 * number1;
    float division = number1 / number2;
    float minus = number1 - number2;
    
    printf("%f \n", sum);
    printf("%f \n", mul);
    printf("%f \n", division);
    printf("%f \n", minus);
    return 0;
}
