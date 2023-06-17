#include <stdio.h>

int main() {
    int intArr[5];
    float floatArr[10];
    int i;

    printf("Nhap vao 5 phan tu cua mang intArr:\n");
    for (i = 0; i < 5; i++) {
        printf("intArr[%d]: ", i);
        scanf("%d", &intArr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (i < 5) {
            floatArr[i] = intArr[i];
        } else {
            floatArr[i] = 0.0;
        }
    }

    printf("\nCac phan tu cua mang intArr:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", intArr[i]);
    }

    printf("\n\nCac phan tu cua mang floatArr:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", floatArr[i]);
    }

    return 0;
}