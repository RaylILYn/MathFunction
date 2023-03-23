#include <iostream>	
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float x, y, z, b;
	cout << "Введите значение x= ";
	cin >> x;
	cout << "Введите значение y= ";
	cin >> y;
	cout << "Введите значение z= ";
	cin >> z;
	if (x == 0, y == 0)
	{
		cout << "Бесконечность" << endl;
		return 0;
	}
	b = pow(log(abs(z)), 2) / pow((abs(x) + abs(y)), 1.0 / 3.0);
	cout << "Функция b равна: " << b << endl << endl;
	system("pause");
}