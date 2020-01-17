#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int N;

int main() {
	cin >> N;
	int* numbers = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> numbers[i];
	}
	int tmp;
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (numbers[j] > numbers[j + 1]) {
				tmp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		cout << numbers[i] << " ";
	}
	return 0;