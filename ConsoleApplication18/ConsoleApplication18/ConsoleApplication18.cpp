#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));

	int numbers[20];

	for (int i = 0; i < 20; i++) {
		numbers[i] = rand() % 201 - 100;
		cout << numbers[i] << " ";
	}

	int max = numbers[0];
	int min = numbers[0];

	for (int i = 0; i < 20; i++) {
		if (numbers[i] > max) {
			max = numbers[i];
		}
		if (numbers[i] < min) {
			min = numbers[i];
		}
	}
	cout << endl;
	cout << min << endl;
	cout << max << endl;
	return 0;
