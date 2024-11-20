#include<stdio.h>

int main(){
// Khai bao va khoi tao hai bien co kieu du lieu so nguyen int
	int fristNumber = 18;
	int secondNumber = 6;
// Khai bao bien sum, minus, multy, device
	int sum, minus, multy, device;
// Xu ly tinh toan
	sum = fristNumber + secondNumber;
	minus = fristNumber - secondNumber;
	multy = fristNumber * secondNumber;
	device = fristNumber / secondNumber;
// Xuat du lieu ra man hinh
	printf("Tong = %d\n",sum);
	printf("Hieu = %d\n",minus);
	printf("Tich = %d\n",multy);
	printf("Thuong = %d",device);
	
	return 0;
}
