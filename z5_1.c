/* Напишите функцию SquaredSum(), которая принимает два дробных числа и
возвращает квадрат их суммы
cout << SquaredSum(12, 6) <<"\n"; // 324
cout << SquaredSum(12, -6) <<"\n"; // 36*/

#include <stdio.h>

int SquaredSum(int a, int b){
    return (a+b)*(a+b);
}

int main(){
    int a, b, result;
    scanf("%d %d", &a, &b);
    printf("%d\n", SquaredSum(a, b));
    return 0;
}
