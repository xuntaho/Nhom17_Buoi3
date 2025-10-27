#include <iostream>

using namespace std;
int tong(int a, int b)
{
	cout<<"Nhap so a : ";
	cin>>a;
	cout<<"/nNhap so a : ";
	cin>>b;
	return a+b;
}
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a=0;
	int b=0;
	cout<<"Tong la "<<tong(a,b);
	system("pause");
	return 0;
}