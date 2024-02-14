#include "Number.h"

/*
int Chisla::GetC() {
	return c;
}
int Chisla::GetB() {
	return b;
}
int Chisla::SetA(int xa) {
	a = xa;
}
int Chisla::SetB(int xa) {
	b = xb;
}*/
Chisla::Chisla() {
	a = 5; b = 12345; c = 0;
}
Chisla::Chisla(int xa) {
	a = xa; b = 12345, c = 0;
}
Chisla::Chisla(int xa, int xb) {
	a = xa; b = xb, c = 0;
}


void Chisla::KolPovt(int m) {
	int n, i, x, s = 0, k = 0;

	for (int i = 0; i <= 9; i++) {
		n = m;
		k = 0;
		while (n != 0) {
			x = n % 10;
			if (x == i) {
				k++;
			}
			n = n / 10;
		}
		if (k != 0) {
			s++;
		}
		if (k > 0) {
			cout << i << " повторяется " << k << " раз " << endl;
		}
	}
}

void Chisla::DelChetn(int m) {
	int a = 0, s = 0, k = 1;
	b = m;

	while (b > 0) {
		a = b % 10; 
		if (a % 2 == 1) {
			s = s + a * k; 
			k = k * 10; 
		}
		b = b / 10; 
	}

	if (s == b) { 
		cout << "Четных цифр нет" << endl;
	} 
	else {
		cout << "Новое число равно: " << s << endl;
	}
}