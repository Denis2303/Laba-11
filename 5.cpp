#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a;
	setlocale(LC_ALL, "rus");
	cout<<"Введите целое число ";
	cin >> a;
	if (a > 0 && a % 2 == 0){
		cout <<"Положительное четное число";
	}
	if (a > 0 && a % 2 != 0){
		cout << "Положительное нечетное число";
	}
	if (a < 0 && abs(a) % 2 == 0){
		cout << "Отрицательное четное число";
	}
	if (a < 0 && abs(a) % 2!=0){
		cout << "Отрицательное нечетное число";
	}
	if (a == 0){
		cout << "Нулевое число";
	}
}
