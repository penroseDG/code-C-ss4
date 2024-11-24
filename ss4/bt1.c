#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n >= 0) {
        printf("So %d la so duong\n", n);
    } else {
        printf("So %d la so am\n", n);
    }

    return 0;
}

