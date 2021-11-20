#include <iostream>
using namespace std;

int main(){
	int a, b;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите A и  B ";
	cin >> a >> b;
	if (a < b){
		a = b;
	}
	else if (b < a){
		b = a;
	}
	else{
		a = 0;
		b = 0;
	}
	cout << a <<" " << b;
}
