/* Используя цикл прочитать каждое число из файла «output» и вывести на экран в виде:
«n. Число», где n - порядковый номер числа в файле*/

#include <stdio.h>

int main(){
    int numder;
    int n = 1;
    FILE *output;
    output = fopen("output.txt", "r");

    while (1){ //Бесконечный цикл
        if (feof(output) != 0){ //Проверка на конец файла
            break;
        }
        
        printf("%d: ", n);
        fscanf(output, "%d", &numder);
        n++;
        printf("%d\n", numder);
        
        
    }
    fclose(output);
    return 0;
}
