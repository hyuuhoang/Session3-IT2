#include <stdio.h>
int main(){
	int so;
	printf(" Moi ban nhap vao so nguyen co 4 chu so ");
	scanf("%d", &so);
	int tong = 0;
	while (so > 0) {
            tong += so % 10; 
            so /= 10;        
        }
	printf(" tong cua 4 chu so ban da nhap la: %d", tong);
	return 0;
}
