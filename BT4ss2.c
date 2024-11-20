#include<stdio.h>

int main(){
// Khai bao va khoi tao bien canh hinh vuong
	int squareEdge = 6;
	
// Khai bao bien chu va dien tich
	int perimeter, area; 
	
// Xu ly tinh toan
	perimeter = 4*squareEdge;
	area = squareEdge*squareEdge;	
	
// In ket qua ra man hinh
	printf("Chu vi hinh vuong = %d\n",perimeter);
	printf("Dien tich hinh vuong = %d",area);
	
	return 0;
}
