

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <random>
#include <time.h>
#include "TestMath.h"
#include "Practice.h"

int main()
{
    //0905
    //int Number = Sum(1,7);
    //Number = Multiply(7);
    //TestRecurcive(5);
   /* float Number2 = Add(10.0f,20.4f);
    Add(1,3);

    int Number3 = Square(2);
    int Number4 = Number * Number;*/
    //1번
    /*int Number1 =0,Number2=0;

    printf("두 수의 범위를 입력 :");
    std::cin>>Number1>>Number2;
    printf("%d", Practice0905_1(Number1,Number2));*/

    //2번
    /*int Age = 0;
    printf("당신의 나이를 입력해 주세요: ");
    std::cin>>Age;
    printf("당신은 %d살 입니다.",Practice0905_2(Age));*/

    //3번
    /*float Radius = 0;
    printf("반지름을 입력해 주세요: ");
    std::cin >> Radius;
    printf("원의 넓이 : %f", Practice0905_3(Radius));*/

    //4번
    /*int Number = 0;
    printf("숫자를 입력해 주세요: ");
    std::cin >> Number;
    if(Number == 0 )
        printf("0은 짝수도 홀수도 아닙니다");
    else{
        if (Practice0905_4(Number) == true)
            printf("홀수입니다.");
        else
            printf("짝수입니다.");
    }*/

    //5번
    /*int Score = 0;
    printf("점수를 입력해 주세요: ");
    std::cin >> Score;
    switch (Practice0905_5(Score))
    {
    case 0:
        printf("당신의 성적은 A입니다");
        break;
    case 1:
        printf("당신의 성적은 B입니다");
        break;
    case 2:
        printf("당신의 성적은 C입니다");
        break;
    case 3:
        printf("당신의 성적은 D입니다");
        break;
    case 4:
        printf("당신의 성적은 E입니다");
        break;
    default:
        printf("성적을 잘못입력하셨습니다.");
        break;
    }*/

    //6번
   /* enum {
        key = 1 << 0,
        fuse = 1 << 1,
        book = 1 << 2,
        note = 1 << 3
    };
    int playerselect = -1;

    while (playerselect != 3) {
        const int itemcount = 4;
        int inventory = 0;

        printf("어떤일을 할까요 1. 아이템 추가 2. 아이템삭제 3. 종료 :");
        std::cin >> playerselect;

        switch (playerselect)
        {
        case 1:
        {
            printf("어떤 아이템을 추가할까요? [0:열쇠,1:퓨즈,2:책,3:노트]");
            int additem = 0;
            std::cin >> additem;
            inventory = Practice0905_6_AddItem(inventory,additem);
            break;
        }
        case 2:
        {
            printf("어떤 아이템을 제거할까요? [0:열쇠,1:퓨즈,2:책,3:노트]");
            int removeitem = 0;
            std::cin >> removeitem;
            inventory = Practice0905_6_AddItem(inventory, removeitem);
            break;
        }
        case 3:
            continue;
        default:
            break;
        }

        if ((inventory & key) != 0) {
            printf("열쇠 ");
        }
        if ((inventory & fuse) != 0) {
            printf("퓨즈 ");
        }
        if ((inventory & book) != 0) {
            printf("책 ");
        }
        if ((inventory & note) != 0) {
            printf("노트 ");
        }
        printf("\n");
    }*/

    //7번
    /*int Number = 0;
    printf("숫자를 입력해주세요: ");
    std::cin >> Number;
    Practice0905_7(Number);*/
    
    //탬플릿 1~3번
    /*int Number1,Number2,Number3;
    int Tmp;
    printf("첫번째 숫자를 입력: ");
    std::cin>>Number1;
    printf("두번째 숫자를 입력: ");
    std::cin>>Number2;
    printf("작은수는 %d, 큰수는 %d입니다.\n",Min(Number1,Number2),Max(Number1, Number2));


    if(Number1 > Number2){
        Tmp = Number1;
        Number1 = Number2;
        Number2 = Tmp;
    }    

    printf("세번째 숫자를 입력: ");
    std::cin>>Number3;
    printf("%d",Clamp(Number3,Number1,Number2));
    return 0;*/

    //팩토리얼
    //printf("%d",factorial(5));

    //Practice09061();
    //Practice09062();
    //Practice09063();
    //Practice09064();
    //Practice09065();
    //Practice09066();
    //Practice09067();
    //Practice09068();
}
