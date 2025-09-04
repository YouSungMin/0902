#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <random>
#include <time.h>

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
    /*std::random_device RandomDivece;
    std::mt19937 Generate(RandomDivece());

    printf("균등 분포 : ");
    std::uniform_int_distribution<> uniformDis(1,100);
    for (int i = 0; i < 10; i++) {
        int Number = uniformDis(Generate);
        printf("%d",Number);
        if(i<9)
        printf(", ");
    }
    printf("\n");

    printf("정규 분포 : ");
    std::normal_distribution<> normalDis(80,10);
    for (int i = 0; i < 10; i++) {
        float Number = normalDis(Generate);
        printf("%.2f", Number);
        if (i < 9)
            printf(", ");
    }
    printf("\n");*/


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

    //0904실습

    //1번
    /*std::random_device RandomDivece;
    std::mt19937 Generate(RandomDivece());
    std::uniform_int_distribution<> uniformDis(1, 6);

    int Count = 0;
    for (int i = 0; i < 1000000; i++) {
        int Number = uniformDis(Generate);
        //printf("%d ",Number);
        if(Number == 6)
            Count++;
    }
    printf("\n6은 %d번 나왔습니다.",Count);
    */
    //2번
    /*enum SRP {
        Scissors=1,
        Rock,
        Paper
    };
    int Player_WinScore=0;
    int Computer_WinScore=0;
    int Player_Input = 0;
    std::random_device RandomDivece;
    std::mt19937 Generate(RandomDivece());
    std::uniform_int_distribution<> uniformDis(1, 3);

    while (Player_WinScore < 3 && Computer_WinScore < 3){
        printf("가위(1), 바위(2) ,보(3) 중 하나를 입력해 주세요 : ");
        std::cin>>Player_Input;
        int Computer_Input = uniformDis(Generate);

        if(Player_Input == Computer_Input)
            printf("비겼습니다, 컴퓨터:%d 플레이어:%d\n",Computer_Input, Player_Input);
        else {
            if ((Player_Input == Scissors && Computer_Input == Rock) ||
                (Player_Input == Rock && Computer_Input == Paper) ||
                (Player_Input == Paper && Computer_Input == Scissors)) {
                printf("플레이어 패배, 컴퓨터:%d 플레이어:%d\n",Computer_Input,Player_Input);
                Computer_WinScore++;
            }
            else {
                printf("플레이어 승리, 컴퓨터:%d 플레이어:%d\n", Computer_Input, Player_Input);
                Player_WinScore++;
            }
        }
    }
    if(Player_WinScore == 3)
        printf("플레이어 최종승리 , 플레이어 이긴횟수:%d, 컴퓨터 이긴횟수:%d", Player_WinScore, Computer_WinScore);
    else
        printf("컴퓨터 최종승리, 플레이어 이긴횟수:%d, 컴퓨터 이긴횟수:%d", Player_WinScore, Computer_WinScore);*/

    //3번
    /*std::random_device RandomDivece;
    std::mt19937 Generate(RandomDivece());
    std::uniform_int_distribution<> uniformDis(1, 100);
    int Number = uniformDis(Generate);
    int InputNumber = 0;
    int flag = 1;
    printf("숫자를 입력해주세요 (1~100) : ");
    //printf("%d",Number);
    for (int i = 4; i >= 0; i--) {
        std::cin >> InputNumber;
        if(InputNumber == Number){
            printf("정답입니다. 입력한 숫자: %d, 정답: %d , 남은횟수: %d\n",InputNumber,Number,i);
            flag = 0;
            break;
        }
        else if (InputNumber > Number) {
            printf("오답입니다 입력한 숫자보다 작습니다. 입력한 숫자: %d, 남은횟수: %d\n",InputNumber,i);
        }
        else
            printf("오답입니다 입력한 숫자보다 큽니다. 입력한 숫자: %d, 남은횟수: %d\n",InputNumber,i);
    }
    if (flag == 1) {
        printf("패배하셨습니다. 정답은 %d 입니다.",Number);
    }*/

    //4번
    /*enum Item
    {
        HPP=1,
        Gun=2,
        Bat=4,
        Key=8
    };
    int inventory=0;
    int endflag = 0;
    int InputNumber=0;
    int ThrowItem = 0;

    while (endflag != 1) {
        printf("인벤토리에 넣을 아이템을 선택: 1.물약 2.권총 3.야구배트 4.열쇠 5.버리기 0.종료:");
        std::cin>>InputNumber;

        switch (InputNumber)
        {
        case 1:
            inventory = inventory | HPP;
            printf("물약을 인벤토리에 넣었습니다.\n");
            break;
        case 2:
            inventory = inventory | Gun;
            printf("권총을 인벤토리에 넣었습니다.\n");
            break;
        case 3:
            inventory = inventory | Bat;
            printf("야구배트를 인벤토리에 넣었습니다.\n");
            break;
        case 4:
            inventory = inventory | Key;
            printf("열쇠를 인벤토리에 넣었습니다.\n");
            break;
        case 5:
            printf("사용할 아이템을 선택 : 1.물약 2.권총 3.야구배트 4.열쇠");
            std::cin>>ThrowItem;
            if (ThrowItem == 1) {
                inventory = inventory ^ HPP;
                printf("물약를 사용하였습니다.\n");
            }
            else if (ThrowItem == 2) {
                inventory = inventory ^ Gun;
                printf("권총을 사용하였습니다.\n");
            }
            else if (ThrowItem == 3) {
                inventory = inventory ^ Bat;
                printf("야구배트를 사용하였습니다.\n");
            }
            else if (ThrowItem == 4) {
                inventory = inventory ^ Key;
                printf("열쇠를 사용하였습니다.\n");
            }
            else
        case 0:
            endflag = 1;
            break;
        default:
            break;
        }
    }*/

    //5번
    /*std::random_device RandomDivece;
    std::mt19937 Generate(RandomDivece());
    std::uniform_int_distribution<> uniformDis(1, 6);


    srand(time(NULL));
    int PlayerDice = uniformDis(Generate);
    int ComputerDice = uniformDis(Generate);
    
    int PlayerMoney=10000;
    int ComputerMoney=10000;
    
    int PlayerDiceSum = 0;
    int ComputerDiceSum = 0;

    int Betting=0;
    int BettingEnd = 0;
    int GameEnd = 0;

    while (PlayerMoney > 0 && ComputerMoney > 0)
    {
        if (PlayerDice > ComputerDice) {
            printf("첫번째 플레이어의 주사위 눈 : %d , 컴퓨터의 주사위 눈: %d , 플레이어 승리 컴퓨터가 배팅합니다.\n", PlayerDice, ComputerDice);
            do {
               Betting = rand() % ComputerMoney;
            }
            while(Betting > PlayerMoney);
            printf("배팅 금액은 %d원 입니다.\n", Betting);
            PlayerDiceSum += PlayerDice;
            ComputerDiceSum += ComputerDice;
        }
        else if (PlayerDice < ComputerDice) {
            printf("첫번째 플레이어의 주사위 눈 : %d , 컴퓨터의 주사위 눈: %d , 컴퓨터 승리 플레이어가 배팅합니다.\n", PlayerDice, ComputerDice);
            while(BettingEnd == 0){
                printf("배팅 금액을 입력해주세요: ");
                std::cin >> Betting;
                if (Betting > PlayerMoney || Betting > ComputerMoney) {
                    printf("배팅 금액이 큽니다 다시 입력해주세요.");
                }
                else {
                    break;
                }
            }
            printf("배팅 금액은 %d원 입니다.\n", Betting);
            PlayerDiceSum += PlayerDice;
            ComputerDiceSum += ComputerDice;
        }
        else {
            printf("첫번째 주사위눈이 같습니다. 주사위를 다시 굴립니다.\n");
            PlayerDice = uniformDis(Generate);
            ComputerDice = uniformDis(Generate);
        }

        PlayerDice = uniformDis(Generate);
        ComputerDice = uniformDis(Generate);

        PlayerDiceSum += PlayerDice;
        ComputerDiceSum += ComputerDice;

        if (PlayerDiceSum > ComputerDiceSum) {
            printf("두번째 플레이어의 주사위 눈 : %d , 컴퓨터의 주사위 눈: %d , 플레이어 승리 .\n", PlayerDiceSum, ComputerDiceSum);
            PlayerMoney +=Betting;
            ComputerMoney -=Betting;
            printf("플레이어 남은금액: %d , 컴퓨터 남은금액: %d\n",PlayerMoney,ComputerMoney);
        }
        else if (PlayerDiceSum < ComputerDiceSum) {
            printf("두번째 플레이어의 주사위 눈 : %d , 컴퓨터의 주사위 눈: %d , 컴퓨터 승리.\n", PlayerDiceSum, ComputerDiceSum);
            PlayerMoney -= Betting;
            ComputerMoney += Betting;
            printf("플레이어 남은금액: %d , 컴퓨터 남은금액: %d\n", PlayerMoney, ComputerMoney);
        }
        else {
            printf("주사위눈이 같습니다. 게임을 재시작합니다.\n");
        }
        PlayerDiceSum = 0;
        ComputerDiceSum = 0;
        Betting = 0;
    }
    if(PlayerMoney > ComputerMoney)
        printf("게임이 종료되었습니다. 플레이어 승리");
    else
        printf("게임이 종료되었습니다. 컴퓨터 승리");*/

    //6번

    srand(time(NULL));

    int PlayerMoney = 100;
    int ComputerMoney = 100;
    int PlayerChoice = 0;
    int ComputerHoljjak = 0;
    int Betting = 0;
    int WinStreakChoice = 0;

    while (PlayerMoney > 100 && ComputerMoney > 100) {
        printf("게임시작\n");
        printf("플레이어 남은금액 %d\n",PlayerMoney);
        printf("홀(1), 짝(2)를 선택해주세요 : ");
        std::cin>>PlayerChoice;
        ComputerHoljjak = rand()%2 +1;
        if (ComputerHoljjak == PlayerChoice) {
            printf("컴퓨터가 뽑은 결과는 %d 입니다. 맞추셨습니다.",ComputerHoljjak);
            
            while (WinStreakChoice != 2){
                printf("1. 연승 도전 , 2. 금액 받기");
                std::cin >> WinStreakChoice;
                if(WinStreakChoice == 1){
                    
                }
                else{
                    
                }
            }
        }
        else{
            printf("컴퓨터가 뽑은 결과는 %d 입니다. 틀리셨습니다.", ComputerHoljjak);
                PlayerMoney -=100;
            }
    }


}