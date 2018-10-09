#include <iostream>
#include <string>
#include <thread>
using namespace std;

/*
struct fork {
	int number;
};
*/

struct philosopher
{
	string name;			//Имя философа
	int fork_left = 0;		//номер вилки для левой руки
	int fork_right = 0;		//номер вилки для правой руки
	int eat_time = 50;		//время еды
	int think_time = 80;	//время размышления
};

string name_philosopher(int i)
{
	string string_i;
	string name_defolt = "Философ";
	string name_regular;

	string_i = std::to_string(i);
	name_regular = name_defolt + " " + string_i;
	return name_regular;
}

int def_fork_left(int i, int N)
{
	int fork = 0;
	fork = i + 1;
	if (i == N)
		fork = 1;
	return fork;
}

int def_fork_right(int i, int N)
{
	int fork = 0;
	fork = i;
	if (i == N)
		fork = N;
	return fork;
}

void input_data(int i, philosopher* philosophers, int N)
{
	philosophers[i].name = name_philosopher(i);
		cout << "Имя: \t" << name_philosopher(i) << endl;
	philosophers[i].fork_left = def_fork_left(i, N);
		cout << "\t\tЛевая вилка: " << philosophers[i].fork_left << endl;
	philosophers[i].fork_right = def_fork_right(i, N);
		cout << "\t\tПравая вилка: " << philosophers[i].fork_right << endl;
		cout << "\t\tВремя еды: " << philosophers[i].eat_time << endl;
		cout << "\t\tВремя ожидания: " << philosophers[i].think_time << endl;
}

void threadphilosopher(int i, philosopher* philosophers, int N)
{
	cout << "поток работает" << endl;
}