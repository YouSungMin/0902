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

    
    /*scanf("%d", &num);
    printf("입력된 숫자는(c) : %d\n", num);
    std::cin >> num;
    printf("입력된 숫자는(c++) : %d\n", num);*/
    int num1 = 0, num2 = 0;
    int tmp;
    int i = 0, j = 0;
    /*
    for (i = 0; i < 3; i++) {
        for (j = 0; j <= i*2; j++)
            printf("*");
        printf("\n");
    }*/
    
    for (i = 0; i < 8; i++) {
        printf("□");
    }
    printf("\n");
    printf("□  □    □  □");
    printf("\n");
    printf("□     □     □");
    printf("\n");

    for (i = 0; i < 8; i++) {
        printf("□");
    }

    printf("두 수를 입력해주세요: ");
    std::cin >> num1;
    std::cin >> num2;
    tmp = num1;
    num1 = num2;
    num2 = tmp;
    printf("num1 = %d, num2 = %d", num1, num2);

    printf("가로 길이 입력 : ");
    std::cin >> num1;
    printf("세로 길이 입력 : ");
    std::cin >> num2;
    printf("사각형의 넓이 : %d",num1*num2);
    
    printf("두 수를 입력해주세요: ");
    std::cin >> num1;
    std::cin >> num2;
    tmp = num1;
    while (tmp >= num2)
        tmp -= num2;
    printf("%d를 %d로 나눈 나머지는 %d 입니다", num1, num2, tmp);
}