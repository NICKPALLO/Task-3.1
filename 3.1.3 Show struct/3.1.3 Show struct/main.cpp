#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

struct adress
{
	string city;
	string street;
	int houseNum;
	int flatNum;
	int index;
};

void showAdress(adress& adress)
{
	cout << "�����: " << adress.city << endl;
	cout << "�����: " << adress.street << endl;
	cout << "����� ����: " << adress.flatNum << endl;
	cout << "������: " << adress.index << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	adress firstAdress = { "������","�����",12,8,123456 };
	adress secondAdress = { "������","�������",59,143,9537639 };
	showAdress(firstAdress);
	cout << endl;
	showAdress(secondAdress);
}