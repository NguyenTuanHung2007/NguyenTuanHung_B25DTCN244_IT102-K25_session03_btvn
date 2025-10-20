#include <stdio.h>

int main(){
    float celsius;
    printf("Nhập nhiệt độ C: ");
    scanf("%f", &celsius);

    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    
    printf("Nhiệt độ F tương ứng là: %.2f\n", fahrenheit);
    return 0;
}