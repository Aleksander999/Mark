#include <iostream>
#include <cmath>


using namespace std;

int N; //переменная для числа

long double fact(int N) { //функция факториала
	if (N < 0) //если пользователь ввел число меньше 0
		return 0; //возвращаем ноль
	if (N == 0) //если пользователь ввел 0,
		return 1; //возвращаем факториал от нуля, т.е. = 1
	else //иначе
		return N * fact(N - 1); // делаем рекурсию(функция выполняет сама себя)
}

int main() {

	cin >> N; //вводим переменную N
	cout << fact(N) << endl; //вывод результата нахождения факториала
	return 0;
}
