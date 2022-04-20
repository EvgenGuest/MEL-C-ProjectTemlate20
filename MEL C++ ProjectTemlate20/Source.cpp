//Персональный шаблон проекта С++
#include <iostream>
#include<string>
#include <fstream>
using namespace std;

double division(double num1, double num2) {
	if (num2 == 0)
		throw invalid_argument("division by zero");	
	return num1 / num2;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	string path = "file.tx"; // вызов ошибки(нет t в .tx)
	ifstream in;
	in.exceptions(ios::badbit | ios::eofbit | ios::failbit);
	try {
		cout << "Попытка открытия файла...\n";
		in.open(path);
		cout << "Файл открыт для чтения:\n";
		string str;
		getline(in, str);
		cout << str << endl;
		in.close();
	}
	catch (const ifstream::failure &ex) {
		cout << "Ошибка: " << ex.what() << endl;
		cout << "Код ошибки: " << ex.code() << endl;		
	}
	

	/*try {
	cout << "Введите делимое: ";
	cin >> n;
	cout << "Введите делитель: ";
	cin >> m;
	cin.ignore(); // чтоб в дальнейшем можно было использовать гетлайн
	cout << n << " / " << m << " = " << division(n, m) << endl;
	}
	catch (const invalid_argument &ex) {
		cout << "Ошибка: " << ex.what() << endl;
	}*/
	/*try { // часть кода, в которой может произойти исключительная ситуация
		cout << "Введите число от 1 до 10: ";
		cin >> n;
		// Если число меньше диапазона, бросаем числовое исключение со значением 0
		if (n < 1)
			throw 0; 
		// если число больше диапазона, бросаем исключение со строковым значением
		if (n > 10)
			throw "Введеное число больше требуемого диапазона\n";
		// throw останавливает выполнение дальнейшей части программы в блоке трай
		cout << "Число входит в диапазон\n";
	}
	// блок кетч который ловит исключение с чиловым значением и выполняется если такое исключение было брошено
	//переменная экс содержит в себе значение бросаемого исключения
	catch (const int ex) { 
		if (ex == 0)
		cout << "Введеное число меньше требуемого диапазона\n";
	}
	// Блок кетч который ловит исключение со строковым значением и выполняется если такое исключение было брошено
	catch (const char ex[]) {
		cout << ex;
	}*/
	/*bool correct = false;
	do {
		try {
			string nStr;
			cout << "Введите число: ";
			getline(cin, nStr);
			n = stoi(nStr);
			cout << "Число n = " << n << endl;
			correct = true;
		}
		catch (const exception &ex) {
			cout << "Ошибка: " << ex.what() << endl;
		}
	} while (!correct);*/



	return 0;
}
