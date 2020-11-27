#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string lit_r = "ssqQSfqsSWfs";
	cout << "Сфомований літерний рядок: " << endl << endl << lit_r << endl << endl;
	string para = "SQ";
	string para1 = "QS";

	bool b = false;
	if (lit_r.find(para) != -1)
		b = true;
	if (lit_r.find(para1) != -1)
		b = true;
	if (b)
		cout << "Так є серед цих символів пара сусідніх букв “SQ” або ”QS”." << endl;
	else
		cout << "Ні не має серед цих символів пара сусідніх букв “SQ” або ”QS”." << endl;

	return 0;
}