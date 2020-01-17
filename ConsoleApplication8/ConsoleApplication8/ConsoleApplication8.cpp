// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream> 
#include "clocale" 
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Что необходимо посчитать?" << endl;
	double a, b, c;
	char действие;
	bool t;
	do {
		cin >> a >> действие >> b;
		switch (действие)
		{
		case'+':
			c = a + b;
			break;
		case'-':
			c = a - b;
			break;
		case'*':
			c = a * b;
			break;
		case'/':
			if (b == 0)
			{
				cout << "Error" << endl;

			}
			else {
				c = a / b;
			}
			break;
		default:
			cout << "Error";
			break;
		}
		cout << a << действие << b << "=" << c << endl;
		cout << "Для повтора нажмите 0" << endl;
		int x;
		cin >> x;
		if (x == 0) {
			t = true;
		}
		else {
			t = false;
		}


	} while (t);
	system("pause");
	return 0;
}
