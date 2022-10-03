#include <stdio.h>

int main()
{
    int sum = 0;
    int i = 1;
    while(i <= 1000){
        printf("%d\n",i);
        
        if(i % 7 == 0){
            sum += i;
            
        }
        if(i > 990){
                printf("%d\n", sum);
        }
        i = i + 4;
    }
    return 0;
}