#include <stdio.h>
int main(){
int number;
    printf("Nhập số nguyên có từ 4 chữ số trở xuống: ");
    scanf("%d", &number);

    int d1 = number % 10;
    int d2 = (number / 10) % 10;
    int d3 = (number / 100) % 10;
    int d4 = (number / 1000) % 10;
    int reverse = d1 * 1000 + d2 * 100 + d3 * 10 + d4;

    printf("Số đảo ngược là: %d\n", reverse);
    return 0;
}