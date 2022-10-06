/*2) Пользователь вводит строку. Используя указатель на строку, сдвиньте каждую букву в
строке на 1 (a → b, b→c …) (каждый символ задается числом) длину строки можно
получить функцией strlen() из библиотеки cstring.*/

#include <iostream>
#include <cstring>

int main(){
    int len, a; 
    char str[50]; // Строка
    std:: cin >> str; // Ввод
    len = strlen(str); // Длина строки

    for(int i = 0; i <= len - 1; i++){
        a = str[i];
        if (a == 122){
            a -= 25;
        } else{
            a++;
        }
        std:: cout << (char)a;
    }

    return 0;
}