#include<iostream>
using namespace std;
int daoso(int n) {
	int s = 0;
	int gan = n;
	while (n != 0) {
		s = (s * 10) + (n % 10);
		n /= 10;
	}
	return s;
}
int main() {
	int n,d;
	cout << "nhap so nguyen duong n= ";
	cin >> n;
	if (n == daoso(n)) {
		cout << "la so palindrom"<<"\n";
	}

	else {
		cout << "khong la palindrom"<<"\n";
		cout << "y c trong cau 3 cua de: ";
		 d = n + daoso(n);
		while (d != daoso(d))
			d = d + daoso(d);
	}
	cout << d << " "<<"\n";
	cout << "so palindrom >10 <100 la: ";
	for (int i = 11; i <= 99; i++) {
		if(daoso(i)==i){
			if (daoso(i * i) == i * i)
				cout << i<<" ";
		}

			
	}
	return 0;

}
