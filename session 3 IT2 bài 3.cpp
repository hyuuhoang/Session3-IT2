#include<stdio.h>
int main(){
	float r;
	printf("nhap ban kinh hinh tron");
	scanf("%f",&r);
	float chuVi = 2 * 3.14 * r;
	float dienTich = r * r * 3.14;
	printf("chu vi hinh tron la : %.2f \n",chuVi);
	printf("dien tich hinh tron la : %.2f \n",dienTich); 
	return 0; 
} 
