#include<stdio.h>

int main(){
// Khai bao va khoi tao bien chieu dai va chieu rong hinh chu nhat
	int Length = 5;
	int Width = 6;
	
// Khai bao bien chu vi va dien tich hinh chu nhat
	int perimeter, area;
	
// Xu ly tinh toan
	perimeter = 2*(Length + Width);
	area = Length*Width;
	
// In ket qua ra man hinh
	printf("Chu vi hinh chu nhat la: %d\n",perimeter);
	printf("Dien tich hinh chu nhat la: %d",area);
	
	return 0;


}
