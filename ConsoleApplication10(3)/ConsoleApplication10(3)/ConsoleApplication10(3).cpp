#include <iostream>
#include <cmath>


using namespace std;

double A, result, a; //переменная для числа
int B; //переменная для целой степени

int main() {

	cin >> A; //ввод числа
	cin >> B; //ввод целой степени

	a = A; //записываем число 

	for (int i = 1; i != B; i++) { //задаем счетчик i=1, пока i не равно B(нашей степени), то прибавляем к i + 1
		A = a * A; //возводим число в степень
	}

	result = A; //записываем результат возведения в переменную result
	cout << result << endl; //вывод результата возведения в степень
	return 0;
