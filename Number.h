#pragma once
#include <iostream>
using namespace std;

class Chisla {
	int a, b, c;
public:
	int GetC;
	int GetB;
	void SetA(int xa);
	void SetB(int xb);
	Chisla();
	Chisla(int);
	Chisla(int, int);
	void KolPovt(int); // �-�� ������� ���������� ���������� ����� � �����
	void DelChetn(int); // �-�� ������� �� ����� ������ �����
};