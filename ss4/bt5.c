#include <stdio.h>

int main() {
    int so1, so2, so3;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    printf("Nhap so thu ba: ");
    scanf("%d", &so3);

    if ((so3 > so1 && so3 < so2) || (so3 > so2 && so3 < so1)) {
        printf("So thu ba (%d) nam trong khoang giua so thu nhat (%d) va so thu hai (%d)\n", so3, so1, so2);
    } else {
        printf("So thu ba (%d) khong nam trong khoang giua so thu nhat (%d) va so thu hai (%d)\n", so3, so1, so2);
    }

    return 0;
}

