#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "Выполнил Лебедев П.В. (УМЛ-112)" << endl;
	cout << "Программа для расчёта количества амёб" << endl;

	int count = 1;
	int hours = 0;
	while (hours <= 48)
	{
		cout << "День " << hours / 24 << ", час " << hours % 24 << ", амёб: " << count << "\n";
		hours += 3;
		count *= 2;
	}

	system("pause");
	return 0;
}