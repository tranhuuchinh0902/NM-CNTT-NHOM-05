#include<iostream>
using namespace std;
int main()
{
	int m, n;
	int s = 0, dem = 0;
	do
	{
		cout << "Nhap 2 so nguyen m va n (m<n): " << endl;
		cin >> m >> n; // Nhập 2 số m, n.
	} while (m >= n);
	for (int i = m;i <= n && i >= m;i++)
	{
		if (i % 2 == 0) {
			dem++;
			s = s + i;
		}
	}
	cout << "so luong chan la: " << dem << endl;
	cout << "tong cac so chan la: " << s << endl;
	return 0;
}
