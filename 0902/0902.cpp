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
    
    // 1번
    /*
    for (i = 0; i < 3; i++) {
        for (j = 0; j <= i*2; j++)
            printf("*");
        printf("\n");
    }*/
    
    // 2번
    /*for (i = 0; i < 8; i++) {
        printf("□");
    }
    printf("\n");
    printf("□  □    □  □");
    printf("\n");
    printf("□     □     □");
    printf("\n");

    for (i = 0; i < 8; i++) {
        printf("□");
    }*/

    //3번
    /*printf("두 수를 입력해주세요: ");
    std::cin >> num1;
    std::cin >> num2;
    tmp = num1;
    num1 = num2;
    num2 = tmp;
    printf("num1 = %d, num2 = %d", num1, num2);*/

    //4번
    /*printf("가로 길이 입력 : ");
    std::cin >> num1;
    printf("세로 길이 입력 : ");
    std::cin >> num2;
    printf("사각형의 넓이 : %d",num1*num2);*/
    
    //5번
    /*printf("두 수를 입력해주세요: ");
    std::cin >> num1;
    std::cin >> num2;
    tmp = num1;
    while (tmp >= num2)
        tmp -= num2;
    printf("%d를 %d로 나눈 나머지는 %d 입니다", num1, num2, tmp);*/

    //6번
    /*int second=0, minute=0, hour=0;
    int isecond=0;

    printf("초를 입력해주세요 : ");
    std::cin >> isecond;
    hour = isecond / 60 / 60;
    minute = isecond / 60 % 60;
    second = isecond % 60;
    printf("%d초는 %d 시간 %d 분 %d 초입니다.", isecond, hour, minute, second);*/

    //7번
    /*int coin500=0, coin100=0, coin50=0, coin10=0;
    int money = 0;

    printf("금액을 입력해주세요 :");
    std::cin >> money;
    coin500 = money / 500;
    coin100 = money % 500 / 100;
    coin50 = money % 500 % 100 / 50;
    coin10 = money % 500 % 100 % 50 / 10;
    printf("500원 : %d개, 100원 : %d개, 50원 : %d개, 10원 : %d개", coin500, coin100, coin50, coin10);*/

    //8번
    /*num1 = 0;
    int hundreds = 0, tens = 0 ,ones = 0;
    printf("숫자를 입력해주세요(최대 999):");
    std::cin >> num1;
    hundreds = num1 / 100;
    tens = num1 % 100 / 10;
    ones = num1 % 100 % 10;
    printf("%d의 100의 자리는 %d, 10의 자리는 %d, 1의 자리는 %d 입니다.", num1,hundreds, tens, ones);*/
}