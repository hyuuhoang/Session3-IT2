#include <stdio.h>

int main() {
    // Khai báo bi?n
    int number, reversedNumber = 0;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);

    if (number < 1000 || number > 9999) {
        printf("So nhap vao khong phai la so nguyen co 4 chu so.\n");
        return 1;
    }

    while (number != 0) {
        int digit = number % 10; 
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;     
    }

    printf("So nghich dao la: %d\n", reversedNumber);

    return 0;
}

