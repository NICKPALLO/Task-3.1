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
	cout << "Город: " << adress.city << endl;
	cout << "Улица: " << adress.street << endl;
	cout << "Номер дома: " << adress.flatNum << endl;
	cout << "Индекс: " << adress.index << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	adress firstAdress = { "Москва","Арбат",12,8,123456 };
	adress secondAdress = { "Ижевск","Пушкина",59,143,9537639 };
	showAdress(firstAdress);
	cout << endl;
	showAdress(secondAdress);
}