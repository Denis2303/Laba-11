#include <iostream>
#include <cmath>
using namespace std;
int main(){
	setlocale(LC_ALL, "rus");
	string chet[2] = {"нечетное", "четное"};
	string zb[3] = {"однозначное", "двухзначное", "трехзначное"};
	string zn[2] = {"Положительное", "Отрицательное"};
	string a;
	cout <<"Введите число ";
	string x = "02468";
	getline(cin, a);
	int b = x.find(a[a.size()-1]);
	b = b >0? 1: 0;
	if (a[0] == '-'){
		cout << zn[1] << ' ' << zb[a.size() - 2] << ' ' << chet[b] << ' ' <<"число";
	}
	if (a.size() == 1 && a[0] == '0'){
		cout << "нулевое число";
	}
	else if (a[0] != '-'){
		cout << zn[0] << ' ' << zb[a.size() - 1] << ' ' << chet[b]<<' ' <<"число";
	}
}
