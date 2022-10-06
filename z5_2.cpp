/*Напишите функцию Sort(), которая принимает массив из 10 чисел и сортирует их по
убыванию
int a[10] = {1, 8, 3, 6, 5, 4, 9, 2, 8, 12};
Sort(a);
// 12 9 8 7 6 5 4 3 2 1*/

#include <iostream>

void sort(int arr[], int n){ // Сортировка массива по убыванию (arr - массив, n - величина массива)
    for(int i = 1; i < n; i++){
		for(int a = 0; a < n-i; a++){
			if(arr[a] < arr[a+1]){ 
				int temp_st = arr[a];
				arr[a] = arr[a+1];
				arr[a+1] = temp_st;
			}
		}
	}
}

int main(){
	int n = 10; // Кол-во элементов
	int arr[n];
	
	for(int i = 0; i < n; i++){ // Заполнение массива
		std::cout << i+1 << ": ";
		std::cin >> arr[i]; 
	} 
	
    sort(arr, n);

	std::cout << "Sort massive: "; //Вывод отсортированного массива
	for(int i = 0; i < n; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	
	return 0;
}