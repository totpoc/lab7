#include<iostream>

using namespace std;

int NOD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return NOD(b, a % b);
}

int main()
{

	int firstNumber, seconNumber;
	
	do {
		cout << "Введите первое число: ";
		cin >> firstNumber;
	} while (firstNumber <= 0);
	
	do {
		cout << "Введите второе число: ";
		cin >> seconNumber;
	} while (seconNumber <= 0);

	if (seconNumber == 0)
		cout << firstNumber << endl;
	else
		cout << "NOD = " << NOD(firstNumber, seconNumber) << endl;

	
	return 0;
}