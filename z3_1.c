#include <stdio.h>

int main()
{
    FILE *output;
    output = fopen("output.txt", "w");
    int a, b, imax, imin, res;
    
    //Ввод значений
    printf("Input a & b:");
    scanf("%d %d", &a, &b);
    
    //Выбираем наибольшее и наименьшее
    if(a >= b){
        imax = a;
        imin = b;
    }
    else{
        imax = b;
        imin = a;
    }
    
    //Перебор значений и ввод умноженных значений на 3 в файл
    while(imin <= imax){
        printf("%d\n", imin);
        res = imin * 3;
        fprintf(output, "%d\n", res);
        imin++;
    }
    
    fclose(output);
    return 0;
}