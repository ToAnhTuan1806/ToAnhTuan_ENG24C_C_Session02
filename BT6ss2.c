#include<stdio.h>

int main(){
// Khai bao hang so Pi kieu du lieu float co gia tri 3.14 va ban kinh hinh tron
	const float Pi = 3.14;
	float radius = 6;
// Khai bao chu vi va dien tich hinh tron
	float circumference, area;

// Xu ly tinh toan
	circumference = 2*Pi*radius;
	area = Pi*radius*radius;
	
// In ket qua ra man hinh
	printf("Chu vi hinh tron la: %.2f\n",circumference);
	printf("Dien tich hinh tron la: %.2f",area);
	
	return 0;
}
