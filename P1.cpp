#include<iostream>
using namespace std;
void boso(long long a,int t=0)
// kiểm tra trong số nhập vào có chữ số 0 và chữ số 5 không, nếu có loại bỏ chữ sô 0 và 5. 
{
	while (a != 0)
	{
		if (a % 10 != 0 && a % 10 != 5)
			t = t * 10 + a % 10;
		a/= 10;
	}
	while (t != 0)
	{
		a =( a * 10) +( t % 10);
		t /= 10;
	}
	cout << a << endl;
}
//phân tích thừa số nguyên tố
void thuasonguyento(int n, int dem=0 )
{
	for (int i = 2; i <= n; i++)
	{
		dem = 0;
		while (n % i == 0)
		{
			dem++;
			n /= i;
		}
		if (dem)
		{
			cout << i;
			if (dem > 1)
				cout << "^" << dem;
			if (n > i) {
				cout << "*";
			}
		}
	}

}
int main()
{
	long long a;
	cout << "nhap a=";
	cin >> a;
	cout << "CHUONG TRINH TIM SO SAU KHI LOAI BO CHU SO 0 VA 5:" << endl;
	cout << "so sau khi bo 0 va 5 la: ";
	boso(a);
	cout << "CHUONG TRINH PHAN TICH THUA SO NGUYEN TO: " << endl;
	cout << "Thua so nguyen to cua " << a << " la: ";
	thuasonguyento(a);
	return 0;
}
