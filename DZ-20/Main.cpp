#include <iostream>
#include<cstdlib>
#include<ctime>


void show_arr(int arr[], const int length) {
	std::cout << " Изначальный массив \n";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << "\n\n";
}

int search_index(int arr[], const int length, int num, int begin = 0) {
	for (int i = begin; i < length; i++)
		if (arr[i] == num)
			return i;
}

int search_last_index(int arr[], const int length, int num) {
	for (int i = length-1; i >=0; i--)
		if (arr[i] == num)
			return i;
}

int search_last_index(int arr[], const int length, int num, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == num)
			return i;
}

int arr_min(int arr[], const int length) {
	int min = arr[0];
	for (int i = 1; i < length; i++)
		if (arr[i] < min)
			min = arr[i];
	return min;
}
int arr_max(int arr[], const int length) {
	int max = arr[0];
	for (int i = 1; i < length; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

double mean_value(int arr[], const int length) {
	double mean = arr[0];
	for (int i = 1; i < length; i++)
		mean += arr[i];
	return (mean/length);
}

void range(int arr[], int num1, int num2) {
	std::cout << " Диапазон массива от "<<num1<<" до "<<num2<<"\n";
	for (int i = num1; i < num2; i++)
		std::cout << arr[i] << ' ';
	std::cout << "\n\n";
}

int counter(int arr[], const int length, int num) {
	int counter = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] == num)
			counter++;
	return counter;
}

int main() {
	setlocale(LC_ALL, "Russian");
	const int size = 100;
	int arr[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 201 - 100;

	show_arr(arr, size);

	int n;
	std::cout << " Введите число из массива -> ";
	std::cin >> n;
	std::cout <<" Число впервые входит в массив под индексом : "<< search_index(arr, size, n) << "\n\n";

	int m;
	std::cout << " Введите число из массива -> ";
	std::cin >> m;
	std::cout << " Последнее вхождение числа в массив под индексом : " << search_last_index(arr, size, m) << "\n\n";

	std::cout << " Минимальный элемент в массива равен : " << arr_min(arr, size) << "\n\n";
	std::cout << " Максимальный элемент в массива равен : " << arr_max(arr, size) << "\n\n";
	std::cout << " среднее арифметическое всех элементов массива равно : " << mean_value(arr, size) << "\n\n";

	int a,b;
	std::cout << " Введите числа для определения диапазона массива, начало -> ";
	std::cin >> a;
	std::cout << " Конец диапазона -> ";
	std::cin >>b;
	range(arr, a, b);

	int c;
	std::cout << " Введите число из массива -> ";
	std::cin >> c;
	std::cout << " Число "<<c<<" встречается в массиве : " << counter(arr, size, c) << " раз(а)" << "\n\n";


	return 0;
}