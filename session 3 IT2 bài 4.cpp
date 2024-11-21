#include<stdio.h>
int main(){
	float toan, van, anh;
	printf("nhap diem toan :");
	scanf("%f",&toan);
	printf("nhap diem van :");
	scanf("%f",&van);
	printf("nhap diem anh :");
	scanf("%f",&anh);
	float tong = toan + van + anh;
	float TB = tong / 3;
	printf("Tong diem 3 mon la : %.2f\n", tong);
	printf("Diem trung binh 3 mon la : %.2f\n", TB);
	return 0; 
} 
