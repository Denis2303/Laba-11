#include <iostream>
#include <cmath>
using namespace std;
int main(){
	setlocale(LC_ALL, "rus");
	string chet[2] = {"��������", "������"};
	string zb[3] = {"�����������", "�����������", "�����������"};
	string zn[2] = {"�������������", "�������������"};
	string a;
	cout <<"������� ����� ";
	string x = "02468";
	getline(cin, a);
	int b = x.find(a[a.size()-1]);
	b = b >0? 1: 0;
	if (a[0] == '-'){
		cout << zn[1] << ' ' << zb[a.size() - 2] << ' ' << chet[b] << ' ' <<"�����";
	}
	if (a.size() == 1 && a[0] == '0'){
		cout << "������� �����";
	}
	else if (a[0] != '-'){
		cout << zn[0] << ' ' << zb[a.size() - 1] << ' ' << chet[b]<<' ' <<"�����";
	}
}
