#include <stdio.h>
#include <math.h>

int main(){
    int a, b;
    printf("Nhập số nguyên dương a: ");
    scanf("%d", &a);
    printf("Nhập số nguyên dương b: ");
    scanf("%d", &b);

    double ex1 = sqrt(a+sqrt(b+1));
    double ex2 = sqrt(b+sqrt(pow(a,2)+pow(b,2)));
    double S = ex1 + ex2;

    printf("Kết quả S là: %.2f\n", S);
    return 0;

}