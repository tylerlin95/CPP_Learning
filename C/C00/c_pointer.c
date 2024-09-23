#include <stdio.h>

int main() {

    int var = 10;
    int *iptr = &var;
    printf("變數 var 的值：%d\n", var);
    printf("變數 var 的記憶體位址：%p\n", &var);
    printf("指標 ptr 指向的位址：%p\n", iptr);
    printf("指標 ptr 的位址：%p\n", &iptr);

    *iptr = 100;
    printf("\n*iptr = 100\n");
    printf("變數 var 的值：%d\n", var);
    printf("變數 var 的記憶體位址：%p\n", &var);
    printf("指標 ptr 指向的位址：%p\n", iptr);
    printf("指標 ptr 的位址：%p\n", &iptr);

    return 0;
}
