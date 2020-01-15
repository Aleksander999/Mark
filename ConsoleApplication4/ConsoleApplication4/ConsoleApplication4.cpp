// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b; // a = 5 b = 2
	a = b; // // a = 2 b = 2
	b = a; // 
	//a = c;

	cout << a << " " << b << endl;
	cin >> a >> b;
	b = a + b;
	a = b - a; 
	b = b - a; 
	cout << a << " " << b;







}
