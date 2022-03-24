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

		//Задача 1
	cout << "Задача 1" << endl;
	string str1;
	cout << "Введите слово или строку по английски: ";
	getline(cin, str1);
	char sym;
	cout << "Введите символ: ";
	cin >> sym;
	string sum;
	for (int i = 0; i < str1.length(); i++) {
		if (str1[i] == sym)
			sum += sym;
	}
	cout << sum << endl << endl;
	getline(cin, str1);							//долго маялся на этом моменте, Сергей подсказал, что у него так же.... после ввода через cin, во второй задачке функция getline() проскакивается.
												//можно было бы конечно без ввода сделать, но это посчитал не правильно будет, т.к. у нас в условии задачи написано, что "пользователь вводит символ"


		//Задача 2
	cout << "Задача 2\nВведите слово по английски: ";
	string str2;
	getline(cin, str2);
	if (palindrome(str2) == 0)
		cout << "True!" << endl << endl;
	else
		cout << "False!" << endl << endl;
	

		//Задача 3
	cout << "Задача 3\n Введите предложение на английском языке: ";
	string str3;
	getline(cin, str3);
	cout << "В вашем слове " << sumEl(str3) << " знаков, по условиям задачи" << endl << endl;


	return 0;
}

		//Задача 3
int sumEl(string str) {
	int sum = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ' || str[i] == '!' || str[i] == '?' || str[i] == '.' || str[i] == ',')
			sum++;
	}
	return sum;
}

		//Задача 2
int palindrome(string str) {
		for (int i = 0; i < str.length(); i++) {
			for (int j = str.length(); j > 0; j--)
				if (str[i] != str[str.length() - i - 1]) {
					return true;
				}
			return false;
		}
}