#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a;
	setlocale(LC_ALL, "rus");
	cout<<"������� ����� ����� ";
	cin >> a;
	if (a > 0 && a % 2 == 0){
		cout <<"������������� ������ �����";
	}
	if (a > 0 && a % 2 != 0){
		cout << "������������� �������� �����";
	}
	if (a < 0 && abs(a) % 2 == 0){
		cout << "������������� ������ �����";
	}
	if (a < 0 && abs(a) % 2!=0){
		cout << "������������� �������� �����";
	}
	if (a == 0){
		cout << "������� �����";
	}
}
