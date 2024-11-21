#include <stdio.h>
int main(){
	float h;
	printf(" Moi ban nhap chieu cao cua tam giac ");
	scanf("%f", &h);
	float a;
	printf(" Moi ban nhap do dai canh tam giac ");
	scanf("%f", &a);
	float S = (a*h)/2 ;
	printf(" dien tich tam giac la %.2f", S);
	
	
	return 0;
}
