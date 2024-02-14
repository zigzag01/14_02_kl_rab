#include <iostream>
#include "Number.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int p, d;
	cout << "Введите числа" << endl;
	cin >> p >> d;
	Chisla Number;
	
	Number.DelChetn(p);
	Number.KolPovt(d);

	system("pause");
	return 0;
}