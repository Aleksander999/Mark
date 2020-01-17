// ConsoleApplication1(2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <clocale>


using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Результаты вычисления выражения 2+2* =" << 2 + 2 * 2 << endl;
	return 0;

}

