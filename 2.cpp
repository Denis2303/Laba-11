#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector <int> a(3);
	setlocale(LC_ALL, "rus");
	cout << "������� �������� ���������� ";
	cin >> a[0] >> a[1] >> a[2];
	sort(a.begin(), a.end());
	cout << a[1] + a[2];
}
