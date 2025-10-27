#include <iostream>

using namespace std;


int tich(int a, int b); {
	cout  << "Nhap a";
	cin >> a;
	cout  << "Nhap b";
	cin >> b;
	cout << a*b;
}
int hieu(int a, int b)
{
	cout << "Nhap a ";
	cin >> a;
	cout << "Nhap b ";
	cin >> b;
	
	return a-b;
	
}

int tong(int a, int b)
{
	cout<<"Nhap so a : ";
	cin>>a;
	cout<<"/nNhap so a : ";
	cin>>b;
	return a+b;
}

int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";

	int a=0; int b=0;
	cout << "Tich la:" << tich(a,b);

	int a =0;
	int b =0;
	cout << hieu(a, b);


	int a=0;
	int b=0;
	cout<<"Tong la "<<tong(a,b);
	system("pause");
	return 0;
}