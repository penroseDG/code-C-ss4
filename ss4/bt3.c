#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0) {
        printf("So %d chia het cho ca 3 va 5\n", n);
    } else if (n % 3 == 0) {
        printf("So %d chia het cho 3\n", n);
    } else if (n % 5 == 0) {
        printf("So %d chia het cho 5\n", n);
    } else {
        printf("So %d khong chia het cho 3 hoac 5\n", n);
    }

    return 0;
}

