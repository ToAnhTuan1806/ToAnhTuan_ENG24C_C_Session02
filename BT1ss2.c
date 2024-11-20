#include<stdio.h>

int main(){
	// Kieu so nguyen (Integer): luu tru so nguyen nhu int, short, long, thuong chiem 4 byte tren he thong 32-bit hoac 64-bit
	int frist = 10; // Khoi tao bien first voi gia tri 10
	printf("frist = %d\n",frist);
	
	// Kieu so thuc (Floating-point): Luu tru so co dau thap phan, do chinh xac 6 chu so thap phan, thuong chiem 4 byte tren he thong 16-bit
	float second = 3.14; // Khoi tao bien second voi gia tri 3.14
	printf("second = %.2f\n",second);

	// Kieu so thuc (Double): Luu tru cac so thuc chinh xac cao hon float, do chinh xac 15 chu so thap phan, thuong chiem 8 byte tren he thong 32-bit
	double third = 3.141592653589793; // Khoi tao bien third voi gia tri 3.141592653589793
	printf("third = %.15f\n",third);
	
	// Kieu ky tu (Character): Luu tru mot ky tu duy nhat, thuong chiem 1 byte trong he thong 8-bit
	char fourth = 'A'; // Khoi tao bien fourth voi gia tri 'A'
	printf("fourth = %c",fourth);
	
	return 0;
	
	
}
