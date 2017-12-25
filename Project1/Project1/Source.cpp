#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "UKR");
	
	
	
	/*char symbol;
	cout << "Введiть один символ : ";
	cin >> symbol;
	cout << symbol << " є " << (symbol >= '0' && symbol <= '9' ? "цифра" : "буква") << endl;*/



	/*int a ;
	cout << "Введiть цiле число : ";
	cin >> a;
	int parne = a % 2;
	parne == 0 ? cout << "Число парне\n" : cout << "Число не парне" << endl;*/
	

	/*int a;
	cout << "Введiть цiле число : ";
	cin >> a;

	(a >= -9 && a <= 9 ? cout << "Число одноцифрове\n" : cout << "Число не одноцифрове") << endl;*/



	/*int a, b, sum = 0, dob = 0;
	cout << "Введiть два цiлих числа : " << endl;
	cin >> a >> b;

	sum = a + b;
	dob = a * b;
	a < 0 ? cout << "Сума = " << sum << "\n": cout << "Добуток = " << dob << endl;*/




	/*float dil;
	double a;
	cout << "Введiть одне дробове число : " << endl;
	cin >> a;
	int b = (int)a;
	dil = a / 2;
	int dr = (a - b) * 100;

	dr > 0 ? cout << "Збiльшення на 1 = " << a + 1 << "\n" : cout << "Дiлення на 2 = " << dil << endl;*/




	//char symvol;
	//cout << "Введiть символ : " << endl;
	//cin >> symvol;

	//(symvol == 'Y' || symvol == 'y') ? cout << "Yes\n" : (symvol == 'N' || symvol == 'n') ? cout << "No\n" : cout << "Don't know" << endl;



	/*int a, b, c, min = 0;
	cout << "Введiть три числа : " << endl;
	cin >> a >> b >> c;
	
	cout << "Найменше число = " ;
	a <= b && a <= c ? cout << a << "\n" : (b < a && b <= c) ? cout << b << "\n" : (c < a && c < b) ? cout << c  : cout << "Всi рiвнi" << endl;
	
	cout << "\n\nБез вкладень" << endl << endl;

	min = a;

	if (b < a)
		min = b;
	if (b >= a)
		min = a;
	if (c < min)
		min = c;

	cout << min << " - мiнiмальне число" << endl;*/




	//int h, m, s;

	//cout << "Введiть години : " << endl;
	//cin >> h;

	//cout << "Введiть хвилини : " << endl;
	//cin >> m;

	//cout << "Введiть секунди : " << endl;
	//cin >> s;

	//h < 24 && h > 0 && m < 60 && m > 0 && s < 60 && s > 0 ? cout << "Доступний\n" : cout << "Недоступний" << endl;



	/*int year;
	cout << "Введiть рiк " << endl;
	cin >> year;

	year % 4 == 0 && year % 100 != 0 || year % 100 == 0 && year % 400 == 0 ? cout << "Рiк високосний \n" : cout << "Рiк не високосний " << endl;*/
	




	/*int a,b,c;
	cout << "Введiть 3 цiлих числа : ";
	cin >> a >> b >> c;
	cout << "Вони є  " << (a < b &&  b < c ? "вiдсортованнi за зростанням" : ((a > b && b > c ? " вiдсортованнi за спаданням" : " не вiдсортованнi"))) << endl;
*/

	system("pause");
	return 0;
}