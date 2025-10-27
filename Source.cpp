#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b)
{
	cout << "Nhap a ";
	cin >> a;
	cout << "Nhap b ";
	cin >> b;
	
	return a-b;
	
}

int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a =0;
	int b =0;
	cout << hieu(a, b);

	system("pause");
	return 0;
}