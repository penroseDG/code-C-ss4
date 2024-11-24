#include <stdio.h>

int main() {
    int ngay, thang, nam;

    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    if (nam < 1) {
        printf("Nam khong hop le\n");
        return 1;
    }

    if (thang < 1 || thang > 12) {
        printf("Thang khong hop le\n");
        return 1;
    }

    int ngay_trong_thang;
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        ngay_trong_thang = 31;
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        ngay_trong_thang = 30;
    } else if (thang == 2) {
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
            ngay_trong_thang = 29; // Nãm nhu?n
        } else {
            ngay_trong_thang = 28; // Không ph?i nãm nhu?n
        }
    }

    if (ngay < 1 || ngay > ngay_trong_thang) {
        printf("Ngay khong hop le\n");
    } else {
        printf("Ngay thang nam hop le: %02d/%02d/%04d\n", ngay, thang, nam);
    }

    return 0;
}

