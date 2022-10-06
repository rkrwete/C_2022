/*1) Создайте текстовый массив с названиями цифр от 0 до 9 Пользователь вводит число
и получает на экран его название.*/

#include <iostream>

int main(){
    int number;

    std:: string str[10] = { 
    "Zero",
    "One",
    "Two",
    "Thrее",
    "Four",
    "Five",
    "Six",
    "Seven",
    "Eight",
    "Nine"
    };
    std:: cin >> number;
    std:: cout << str[number] << std:: endl;

    return 0;
}