// classes1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
#include "Complex.h"

int main()
{
	complex a(2, 3);
	complex b(1, 5);
	cout << a << ", " << b << endl;

	cout << "**********" << endl;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;

	cout << "**********" << endl;

	cout << a - a << endl;
	cout << a / a << endl;

	cout << "**********" << endl;

	cout << a.Conjugate() << endl;

	cout << "**********" << endl;

	cout << a.Mod() << endl;
	cout << a.Arg() << endl;

	cout << "**********" << endl;

	complex v[4]{ 1,2, complex(2,3) };
	complex m[32];
	for (int i = 0; i < 4; i++)
		cout << v[i] << ' ';

	cout << endl;
	cout << "**********" << endl;

	complex* pc = new complex(1,2);
	cout << *pc << endl;

	cout << "**********" << endl;

	double re = pc->getRe();
	double im = pc->getIm();
	cout << re << ", " << im << endl;

	cout << "**********" << endl;

	delete pc;
	complex* l = new complex[3]{complex(1,2), 3};
	cout << l[0].Re << endl;
	cout << l[1].Re << endl;
	cout << l[1].Im << endl;
	delete l;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
