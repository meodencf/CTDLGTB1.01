//Cho mảng 1 chiều các số nguyên. Viết hàm tính tổng các số chẵn trong mảng bằng phương pháp đệ quy
#include<iostream>

using namespace std;


int tinhtong(int a[], int n){
	if (n == 0)
		return 0;
	if (a[n] % 2 == 0)
		return tinhtong(a, n - 1) + a[n];
	else
		return tinhtong(a, n - 1);
}
void xuattong(int a[], int n){
	for(int i=1; i<=n; i++){
		cout<<a[i]<<" ";
	}
}
int main() {
	int n;
	int a[n];
	cout << "Nhap kich thuoc mang: ";
	cin >> n;
	for (int i = 1; i <= n;i++) {
		cout << "Nhap a[" << i << "]= ";
		cin >> a[i];
	}
	xuattong(a,n);
	cout << "\nVay tong chan la: " << tinhtong(a,n)<<endl;;
	return 0;
}