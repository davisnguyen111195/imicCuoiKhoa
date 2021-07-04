/*
*Viết hàm có đối số là số nguyên 16bit và sử dụng hàm printf in ra màn hình 2 số  gồm 8 bit cao và 8 bit thấp. Ví dụ nhập vào số 1234 (0x04D2) xuất ra màn hình 2 số 4 (0x04) và 210 (0xD2).
*/

#include <stdio.h>

void Hex(int n); 

void main() {
    __uint16_t x = 0;
    __uint8_t xH = 0;
    __uint8_t xL = 0;
    scanf("%hd", &x);
    printf("0x%x\n", x);
    xH = x>>8;
    xL = (x<<8)>>8;
    printf("0x%x\n", xH);
    printf("0x%x\n", xL);
}