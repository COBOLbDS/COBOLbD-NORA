#pragma once
#include "pch.h"
#include <string>
#include <iostream>
using namespace std;
class User
{
	    string Login;
public:
		int Password;
		double AmoutOfMoney;
		string StateOfAcc;

		//методы
		void CheckPassword(int P);
		void CheckMoney();
		void ChangeCurrency(double M, string UrCurrency, string NeededCurrency);
		void Payment(double M, string Currency, string Login);
		void GetMoney(double M, string Currency);
};

