#include "pch.h"
#include "User.h"

void User::CheckPassword(int P)
{
		cout << "Пароль введён правильно" << endl;
}

void User::CheckMoney()
{
	cout << "Сумма на счету -- 10000 $" << endl;
}

void User::ChangeCurrency(double M, string UrCurrency, string NeededCurrency)
{
	cout << "Операция прошла успешно" << endl;
}

void User::Payment(double M, string Currency, string Login)
{
	cout << "Операция не иожет быть выполнена" << endl;
}

void User::GetMoney(double M, string Currency)
{
	cout << "Операция завершена. Желаете получить чек?" << endl;
}

