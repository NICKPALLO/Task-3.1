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
		cout << "������� ����� ������: ";
		cin >> choice;
		month = static_cast<months>(choice);

		switch (static_cast<int>(month))
		{
		case 0:
			cout << "�� ��������!";
			return 0;
		case 1:
			cout << "������";
			break;
		case 2:
			cout << "�������";
			break;
		case 3:
			cout << "����";
			break;
		case 4:
			cout << "������";
			break;
		case 5:
			cout << "���";
			break;
		case 6:
			cout << "����";
			break;
		case 7:
			cout << "����";
			break;
		case 8:
			cout << "������";
			break;
		case 9:
			cout << "��������";
			break;
		case 10:
			cout << "�������";
			break;
		case 11:
			cout << "������";
			break;
		case 12:
			cout << "�������";
			break;
		default:
			cout << "�������� �����!";
		}
		cout << endl;
	}


}