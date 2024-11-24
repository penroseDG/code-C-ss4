#include <stdio.h>

int main() {
    int thang;
    printf("Nhap so thang (1-12): ");
    scanf("%d", &thang);

    if (thang < 1 || thang > 12) {
        printf("So thang khong hop le\n");
    } else if (thang == 2) {
        printf("Thang %d co 28 hoac 29 ngay (nam nhuan se co 29 ngay)\n", thang);
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        printf("Thang %d co 30 ngay\n", thang);
    } else {
        printf("Thang %d co 31 ngay\n", thang);
    }

    return 0;
}

