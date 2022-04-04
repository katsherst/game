#include <iostream>
#include <vector>
#include <string>
#include "animals.h"
#include "operations.h"
using namespace std;
int main()
{pokupki p;cout << "Hello! Please, enter your money. " << endl;
	cin >> p.money;
	if (p.money <= 0) cout << "Oops, something is wrong... ";
	else
	{pricelist();
		cycle(p);
		cout << endl << "Goodbye! Have a nice day!";}}