// Lab_02.cpp
// < ������� ����� >
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 0.1
#include <iostream>

using namespace std;
int main()
{
	double a=0,b=0;
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	z1 = (sin(a) + cos(2 * b - a)) / (cos(a) - sin(2 * b - a));
	//z2 = (1 + sin(2 * b)) / (cos(2 * b));
	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
