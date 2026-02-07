/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

#include <stdio.h>

// hàm hoán vị
void hoanVi(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main(){
    int a, b;

    printf("Nhap a b: ");
    scanf("%d %d", &a, &b);

    hoanVi(&a, &b);   // gọi hàm

    printf("a = %d, b = %d", a, b);

    return 0;
}