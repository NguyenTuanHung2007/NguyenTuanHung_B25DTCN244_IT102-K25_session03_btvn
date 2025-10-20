#include <stdio.h>

int main(){
   float do_dai_day, chieu_cao;
    printf("Nhập độ dài đáy hình tam giác: ");
    scanf("%f", &do_dai_day);
    printf("Nhập chiều cao hình tam giác: ");
    scanf("%f", &chieu_cao);

    float area = (do_dai_day * chieu_cao) / 2;

    printf("Diện tích hình tam giác là: %.2f\n", area);
    return 0;
}