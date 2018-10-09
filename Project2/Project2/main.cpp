#include <iostream>
#include <string>
#include <thread>
#include "functions.h"

using namespace std;
//fork *forks_mass;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N = 0, i = 0;
	// Ввод количества философов
	cout << "Введите число философов: ";
	cin >> N;
	cout << "Число философов: " << N << endl;

	//Обьявляем массив философов
	philosopher* philosophers = new philosopher[N+1];
//	forks_mass = new fork[N];

	for (i = 1; i < N+1; i++) {
		// Создание сущностей философов
		input_data(i, philosophers, N);
		// Создаём потоки по числу философовы
		threadphilosopher(i, philosophers, N);
	}

	system("pause");
	return 0;
}