#include <iostream>

using namespace std;

enum class months
{
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

int main()
{
	setlocale(LC_ALL, "Rus");
	months month;
	int choice;
	while (true)
	{
		cout << "Введите номер месяца: ";
		cin >> choice;
		month = static_cast<months>(choice);

		switch (static_cast<int>(month))
		{
		case 0:
			cout << "До свидания!";
			return 0;
		case 1:
			cout << "Январь";
			break;
		case 2:
			cout << "Февраль";
			break;
		case 3:
			cout << "Март";
			break;
		case 4:
			cout << "Апрель";
			break;
		case 5:
			cout << "Май";
			break;
		case 6:
			cout << "Июнь";
			break;
		case 7:
			cout << "Июль";
			break;
		case 8:
			cout << "Август";
			break;
		case 9:
			cout << "Сентябрь";
			break;
		case 10:
			cout << "Октябрь";
			break;
		case 11:
			cout << "Ноябрь";
			break;
		case 12:
			cout << "Декабрь";
			break;
		default:
			cout << "Неверное число!";
		}
		cout << endl;
	}


}