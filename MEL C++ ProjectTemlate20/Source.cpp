//������������ ������ ������� �++
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

	string path = "file.tx"; // ����� ������(��� t � .tx)
	ifstream in;
	in.exceptions(ios::badbit | ios::eofbit | ios::failbit);
	try {
		cout << "������� �������� �����...\n";
		in.open(path);
		cout << "���� ������ ��� ������:\n";
		string str;
		getline(in, str);
		cout << str << endl;
		in.close();
	}
	catch (const ifstream::failure &ex) {
		cout << "������: " << ex.what() << endl;
		cout << "��� ������: " << ex.code() << endl;		
	}
	

	/*try {
	cout << "������� �������: ";
	cin >> n;
	cout << "������� ��������: ";
	cin >> m;
	cin.ignore(); // ���� � ���������� ����� ���� ������������ �������
	cout << n << " / " << m << " = " << division(n, m) << endl;
	}
	catch (const invalid_argument &ex) {
		cout << "������: " << ex.what() << endl;
	}*/
	/*try { // ����� ����, � ������� ����� ��������� �������������� ��������
		cout << "������� ����� �� 1 �� 10: ";
		cin >> n;
		// ���� ����� ������ ���������, ������� �������� ���������� �� ��������� 0
		if (n < 1)
			throw 0; 
		// ���� ����� ������ ���������, ������� ���������� �� ��������� ���������
		if (n > 10)
			throw "�������� ����� ������ ���������� ���������\n";
		// throw ������������� ���������� ���������� ����� ��������� � ����� ����
		cout << "����� ������ � ��������\n";
	}
	// ���� ���� ������� ����� ���������� � ������� ��������� � ����������� ���� ����� ���������� ���� �������
	//���������� ��� �������� � ���� �������� ���������� ����������
	catch (const int ex) { 
		if (ex == 0)
		cout << "�������� ����� ������ ���������� ���������\n";
	}
	// ���� ���� ������� ����� ���������� �� ��������� ��������� � ����������� ���� ����� ���������� ���� �������
	catch (const char ex[]) {
		cout << ex;
	}*/
	/*bool correct = false;
	do {
		try {
			string nStr;
			cout << "������� �����: ";
			getline(cin, nStr);
			n = stoi(nStr);
			cout << "����� n = " << n << endl;
			correct = true;
		}
		catch (const exception &ex) {
			cout << "������: " << ex.what() << endl;
		}
	} while (!correct);*/



	return 0;
}
