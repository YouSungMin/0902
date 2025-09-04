#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "header.h"
#include <stdio.h>
#include <string.h>
#include <string>

int main()
{
    //0902
    /*printf("Hello world\n");
    printf("유성민 \"");
    printf("00년생입니다.\"\n");
    printf("□□□□□□□□□□□□□□□□□□□□□□□□");
    scanf("%d", &num);
    printf("입력된 숫자는(c) : %d\n", num);
    std::cin >> num;
    printf("입력된 숫자는(c++) : %d\n", num);
    
    int num1 = 0, num2 = 0;
    int tmp;
    int i = 0, j = 0;*/
    
    //0902실습
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


    //0903실습
    //1번
    /*int num = 0;
    printf("숫자를 입력해주세요 : ");
    std::cin >> num;
    if (num == 0)
        printf("0입니다.");
    else
        num > 0 ? printf("양수입니다.") : printf("음수입니다.");*/

    //2번
    /*int num = 0;
    printf("숫자를 입력해주세요 : ");
    std::cin >> num;
    if (num == 0)
        printf("0입니다.");
    else
        num %2 == 0 ? printf("짝수입니다.") : printf("홀수입니다.");*/
    
    //3번
    /*int num1 = 0, num2 = 0;
    printf("첫 번째 숫자를 입력해주세요 :");
    std::cin >> num1;
    printf("두 번째 숫자를 입력해주세요 :");
    std::cin >> num2;

    if (num1 == num2)
        printf("같은 수 입니다.");
    else
        num1 > num2 ? printf("큰 수는 %d 입니다.", num1) : printf("큰 수는 %d 입니다.", num2);*/

    //4번
    /*const unsigned int LimitAge = 5;
    const float LimitHeight = 120.0f;
    int age = 0, height = 0;
    printf("나이를 입력해주세요 :");
    std::cin >> age;
    printf("키를 입력해주세요 :");
    std::cin >> height;

    if(age > LimitAge && height > LimitHeight)
        printf("롤러코스터 탑승 가능");
    else
        printf("롤러코스터 탑승 불가능");*/

    //5번
    /*int score = 0;
    printf("점수를 입력해주세요 : ");
    std::cin >> score;
    switch (score/10)
    {
    case 10:
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    default:
        printf("F");
        break;
    }*/

    //6번
    /*int Score1 = 0, Score2 = 0, Score3 = 0;
    printf("첫 번째 과목의 점수를 입력해주세요 :");
    std::cin >> Score1;
    printf("두 번째 과목의 점수를 입력해주세요 :");
    std::cin >> Score2;
    printf("세 번째 과목의 점수를 입력해주세요 :");
    std::cin >> Score3;

    if (Score1 < 40 || Score2 < 40 || Score3 < 40)
        printf("불합격");
    else
       ((Score1 + Score2 + Score3) / 3.0f >= 60) ? printf("합격") : printf("불합격");*/
    
    //0904
     
    //int flag = 0b1010;
    ////0b0001 =왼쪽 키가눌려졌다.
    ////0b0010 =오른쪽 키가눌려졌다.
    ////0b0100 =위쪽 키가눌려졌다.
    ////0b1000 =아래쪽 키가눌려졌다.
    //if ((flag & 0b0010) != 0b0000) {
    //    //오른쪽 키가 눌려져있다;
    //}
    //else {
    //    //오른쪽 키가 눌려져 있지 않다;
    //}
    ////enum 상수들에게 사람이 알아보기 좋은 이름붙여 놓기
    //enum Key
    //{
    //    Up,
    //    Down,
    //    Left,
    //    Right
    //};
    /*for (int i = 0; i < 10; i++)
        {
            printf("Hello %d",i); //브레이크 포인트 활용하기
        }

        int Count = 1;
        while ((Count % 3) != 0) {
            printf("While %d",Count);
            Count++;
        }

        Count = 1;
        do
        {
            printf("While %d", Count);
            Count++;
        } while ((Count % 3) != 0);*/
    //간단실습
 
    //int num=0;
    //printf("숫자를 입력:");
    //std::cin>>num;
    //if((num & 0b0001) != 0) // == 0b0001 내가 짠 조건 
    //    printf("홀수입니다.");
    //else
    //    printf("짝수입니다.");

    //간단실습2

    //1-1번
    /*int InputNum = 1;
    int sum =0;
    while (InputNum != 0) {
        printf("숫자를 입력해 주세요: ");
        std::cin >> InputNum;
        sum += InputNum;
    }
    printf("입력받은 수의 합: %d", sum);*/

    //1-2번
    /*int InputNum = 1;
    int sum = 0;
    do {
        printf("숫자를 입력해 주세요: ");
        std::cin>>InputNum;
        sum +=InputNum;
    }
    while(InputNum > 0);
    printf("입력받은 수의 합: %d",sum);*/

    //2번
    /*int InputNum=0;
    printf("숫자를 입력해주세요: ");
    std::cin>>InputNum;
    for(int i=1;i<10;i++)
        printf("%d x %d = %d\n",InputNum,i,InputNum*i);*/

    //3번
    /*int InputNum = 0;
    printf("숫자를 입력해주세요: ");
    std::cin >> InputNum;
    for(int i=1;i<=InputNum;i+=2)
        printf("%d\n",i);*/

    //4번
    /*for(int i=1;i*7<100;i++)
        printf("%d\n", i*7);*/

    //5번
    /*int num =0;
    printf("숫자를 입력해주세요: ");
    std::cin>>num;

    for (int i = 0; i < num; i++){
       for (int j = num-1 ; j > i; j--) {
            printf(" ");
       }
       for(int j = 0;j<= i*2 ; j++){
            printf("*");
        }
        printf("\n");
    }*/
}