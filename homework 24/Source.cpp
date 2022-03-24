#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;

int palindrome(string str);

int sumEl(string str);


int main() {
	setlocale(LC_ALL, "Russian");

		//������ 1
	cout << "������ 1" << endl;
	string str1;
	cout << "������� ����� ��� ������ �� ���������: ";
	getline(cin, str1);
	char sym;
	cout << "������� ������: ";
	cin >> sym;
	string sum;
	for (int i = 0; i < str1.length(); i++) {
		if (str1[i] == sym)
			sum += sym;
	}
	cout << sum << endl << endl;
	getline(cin, str1);							//����� ������ �� ���� �������, ������ ���������, ��� � ���� ��� ��.... ����� ����� ����� cin, �� ������ ������� ������� getline() ��������������.
												//����� ���� �� ������� ��� ����� �������, �� ��� �������� �� ��������� �����, �.�. � ��� � ������� ������ ��������, ��� "������������ ������ ������"


		//������ 2
	cout << "������ 2\n������� ����� �� ���������: ";
	string str2;
	getline(cin, str2);
	if (palindrome(str2) == 0)
		cout << "True!" << endl << endl;
	else
		cout << "False!" << endl << endl;
	

		//������ 3
	cout << "������ 3\n ������� ����������� �� ���������� �����: ";
	string str3;
	getline(cin, str3);
	cout << "� ����� ����� " << sumEl(str3) << " ������, �� �������� ������" << endl << endl;


	return 0;
}

		//������ 3
int sumEl(string str) {
	int sum = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ' || str[i] == '!' || str[i] == '?' || str[i] == '.' || str[i] == ',')
			sum++;
	}
	return sum;
}

		//������ 2
int palindrome(string str) {
		for (int i = 0; i < str.length(); i++) {
			for (int j = str.length(); j > 0; j--)
				if (str[i] != str[str.length() - i - 1]) {
					return true;
				}
			return false;
		}
}