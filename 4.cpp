#include <iostream>
using namespace std;

int main(){
	int x, y;
	setlocale(LC_ALL,"rus");
	cout<< "������� ���������� ����� ";
	cin >> x >> y;
	if (x >= 0 && y >= 0){
		cout << "������ ��������";
	}
	else if (x <= 0 && y >= 0){
		cout << "������ ��������";
	}
	else if( x <=0 && y <= 0) {
		cout << "������ ��������";
	}
	else if (x >= 0 && y <= 0){
		cout  << "��������� ��������";
	}
}
