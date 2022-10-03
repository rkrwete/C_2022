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