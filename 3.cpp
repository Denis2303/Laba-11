#include <iostream>
#include <cmath>
using namespace std;

double r(double x1, double x2, double y1, double y2){
	double rast = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
	return rast;
}

int main(){
	double x1, x2,y1,y2, x3,y3;
	setlocale(LC_ALL, "rus");
	cout << "¬ведите координаты точки A ";
	cin >> x1 >> y1;
	cout << "¬ведите координаты точки B ";
	cin >> x2 >> y2;
	cout << "¬ведите координаты точки C ";
	cin >> x3 >> y3;
	if (r(x1,x2,y1,y2) > r(x1,x3,y1,y3)){
		cout <<'B' <<' ' << r(x1,x2,y1,y2);
	}
	else{
		cout <<'C' <<' ' << r(x1,x3,y1,y3);
	}
}
