#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

struct account
{
	int accountNumber;
	string name;
	double balance;
};

void changeBalance(account& client, int& newBalance)
{
	client.balance = newBalance;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	account client1;
	cout << "������� ����� �����: ";
	cin >> client1.accountNumber;
	cout << "������� ���:";
	cin >> client1.name;
	cout << "������� ������:";
	cin >> client1.balance;

	int newBalance;
	cout << "������� ����� ������: ";
	cin >> newBalance;
	changeBalance(client1, newBalance);

	cout <<"��� ����: " << client1.accountNumber << ", " << client1.name << ", " << client1.balance;


}