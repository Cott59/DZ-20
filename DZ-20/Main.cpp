#include <iostream>
#include<cstdlib>
#include<ctime>


void show_arr(int arr[], const int length) {
	std::cout << " ����������� ������ \n";
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
	std::cout << " �������� ������� �� "<<num1<<" �� "<<num2<<"\n";
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
	std::cout << " ������� ����� �� ������� -> ";
	std::cin >> n;
	std::cout <<" ����� ������� ������ � ������ ��� �������� : "<< search_index(arr, size, n) << "\n\n";

	int m;
	std::cout << " ������� ����� �� ������� -> ";
	std::cin >> m;
	std::cout << " ��������� ��������� ����� � ������ ��� �������� : " << search_last_index(arr, size, m) << "\n\n";

	std::cout << " ����������� ������� � ������� ����� : " << arr_min(arr, size) << "\n\n";
	std::cout << " ������������ ������� � ������� ����� : " << arr_max(arr, size) << "\n\n";
	std::cout << " ������� �������������� ���� ��������� ������� ����� : " << mean_value(arr, size) << "\n\n";

	int a,b;
	std::cout << " ������� ����� ��� ����������� ��������� �������, ������ -> ";
	std::cin >> a;
	std::cout << " ����� ��������� -> ";
	std::cin >>b;
	range(arr, a, b);

	int c;
	std::cout << " ������� ����� �� ������� -> ";
	std::cin >> c;
	std::cout << " ����� "<<c<<" ����������� � ������� : " << counter(arr, size, c) << " ���(�)" << "\n\n";


	return 0;
}