#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(){
    int radius;
    double pi = M_PI;
    printf("Nhập bán kính hình tròn: ");
    scanf("%d", &radius);

    float area = pi * radius * radius;
    float perimeter = 2 * pi * radius;

    printf("Diện tích hình tròn là: %.2f\n", area);
    printf("Chu vi hình tròn là: %.2f\n", perimeter);
    return 0;

}