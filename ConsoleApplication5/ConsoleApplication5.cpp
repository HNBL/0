// ѕрограмма длл€ вывода в консоль любое колличество положительных нечетных чисел

#include <cstdlib>
#include <iostream>
using namespace std;

int main ()
{
	system("chcp 1251>nul"); // строка дл€ перевода кириллицы в русский €зык
	
	int n , k = 0 , S; 
	cout << "—колько вывести нечетных чисел ";
	cin >> n;

	
	while (k < n) // цикл 
	{
		k++;
		if (S = 2 * k + 1) {  // если услови€ по нечетной  формуле S = 2 * k + 1
 			cout << "  " << S; // то формула выводит функцию.
		}
		
		
	}

	cout << endl;
	system("paus>nul");
	return 0;


}


