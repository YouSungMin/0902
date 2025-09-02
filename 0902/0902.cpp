#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "header.h"
#include <stdio.h>

int main()
{
    /*printf("Hello world\n");
    printf("유성민 \"");
    printf("00년생입니다.\"\n");
    printf("□□□□□□□□□□□□□□□□□□□□□□□□");*/

    int num = 0;
    scanf("%d", &num);
    printf("입력된 숫자는(c) : %d\n", num);
    std::cin >> num;
    printf("입력된 숫자는(c++) : %d\n", num);
}