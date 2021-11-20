#include <iostream>
using namespace std;

int main(){
	int x, y;
	setlocale(LC_ALL,"rus");
	cout<< "Введите координаты точки ";
	cin >> x >> y;
	if (x >= 0 && y >= 0){
		cout << "первая четверть";
	}
	else if (x <= 0 && y >= 0){
		cout << "вторая четверть";
	}
	else if( x <=0 && y <= 0) {
		cout << "третья четверть";
	}
	else if (x >= 0 && y <= 0){
		cout  << "четвертая четверть";
	}
}
