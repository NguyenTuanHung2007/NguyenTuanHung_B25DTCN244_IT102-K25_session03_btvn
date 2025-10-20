#include <stdio.h>

int main(){
    float toan, van, anh;
    printf("Nhập điểm Toán: ");
    scanf("%f", &toan);
    printf("Nhập điểm Văn: ");
    scanf("%f", &van);
    printf("Nhập điểm Anh: ");
    scanf("%f", &anh);

    float average = (toan + van + anh) / 3.0;
    
    printf("Điểm trung bình là: %.2f\n", average);
    return 0;
}