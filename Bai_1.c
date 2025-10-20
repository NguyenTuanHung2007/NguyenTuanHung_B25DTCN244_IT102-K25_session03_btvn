#include <stdio.h>

int main(){
    char name[50] = "";
    printf("Nhập tên của bạn: ");
    
    fgets(name, sizeof(name), stdin);

    printf("Tên của bạn là: %s\n", &name);
    return 0;
}