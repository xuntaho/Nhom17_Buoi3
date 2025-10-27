#include <iostream>

using namespace std;
int tong(int a, int b)
{
	cout<<"Nhap so a : ";
	cin>>a;
	cout<<"\nNhap so a : ";
	cin>>b;
	return a+b;
}
int hieu(int a, int b);
int tich(int a, int b);
bool KTSNT(int n)
{
	if(n<2)
		return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	
}
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int n;
	cout<<"Nhap so n ";
	cin>>n;
	if(KTSNT(n))
	{
		cout<<"La so nguyen to\n";
		
	}
	else 
		cour<<"Khong la so nguyen to\n";
	int a=0;
	int b=0;
	cout<<"Tong la "<<tong(a,b);
	system("pause");
	return 0;
}