// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	double x0, v0, t, a, xt;
	a = -9.8;
	cin >> x0 >> v0 >> t;
	xt = x0 + v0 * t + 1/2 * a * t * t;
	cout << xt << endl; 
	return 0;








}