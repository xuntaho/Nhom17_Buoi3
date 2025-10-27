#include <iostream>

using namespace std;
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
int tich(int a, int b);
float thuong(int a, int b);
bool sht (int x)
{
	int tong =0;
	for ( int i =0 ; <= x/2; i++);
	{
		if( x % i ==0)
		{
			tong += i;
		}
	}
	return ton ==x;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a =0;
	int b =0;
	cout << hieu(a, b);

	int a=0;
	int b=0;
	cout<<"Tong la "<<tong(a,b);
	if ( sht(x) )
	{
		cout << "La so hoan thien ";
	}
	else
		cout << "Khong la so hoan thien";
	system("pause");
	return 0;
}