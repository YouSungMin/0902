#pragma once

void OldTales()
{
    //0902
    /*printf("Hello world\n");
    printf("������ \"");
    printf("00����Դϴ�.\"\n");
    printf("�������������������������");
    scanf("%d", &num);
    printf("�Էµ� ���ڴ�(c) : %d\n", num);
    std::cin >> num;
    printf("�Էµ� ���ڴ�(c++) : %d\n", num);

    int num1 = 0, num2 = 0;
    int tmp;
    int i = 0, j = 0;*/

    //0902�ǽ�
    // 1��
    /*
    for (i = 0; i < 3; i++) {
        for (j = 0; j <= i*2; j++)
            printf("*");
        printf("\n");
    }*/

    // 2��
    /*for (i = 0; i < 8; i++) {
        printf("��");
    }
    printf("\n");
    printf("��  ��    ��  ��");
    printf("\n");
    printf("��     ��     ��");
    printf("\n");

    for (i = 0; i < 8; i++) {
        printf("��");
    }*/

    //3��
    /*printf("�� ���� �Է����ּ���: ");
    std::cin >> num1;
    std::cin >> num2;
    tmp = num1;
    num1 = num2;
    num2 = tmp;
    printf("num1 = %d, num2 = %d", num1, num2);*/

    //4��
    /*printf("���� ���� �Է� : ");
    std::cin >> num1;
    printf("���� ���� �Է� : ");
    std::cin >> num2;
    printf("�簢���� ���� : %d",num1*num2);*/

    //5��
    /*printf("�� ���� �Է����ּ���: ");
    std::cin >> num1;
    std::cin >> num2;
    tmp = num1;
    while (tmp >= num2)
        tmp -= num2;
    printf("%d�� %d�� ���� �������� %d �Դϴ�", num1, num2, tmp);*/

    //6��
    /*int second=0, minute=0, hour=0;
    int isecond=0;

    printf("�ʸ� �Է����ּ��� : ");
    std::cin >> isecond;
    hour = isecond / 60 / 60;
    minute = isecond / 60 % 60;
    second = isecond % 60;
    printf("%d�ʴ� %d �ð� %d �� %d ���Դϴ�.", isecond, hour, minute, second);*/

    //7��
    /*int coin500=0, coin100=0, coin50=0, coin10=0;
    int money = 0;

    printf("�ݾ��� �Է����ּ��� :");
    std::cin >> money;
    coin500 = money / 500;
    coin100 = money % 500 / 100;
    coin50 = money % 500 % 100 / 50;
    coin10 = money % 500 % 100 % 50 / 10;
    printf("500�� : %d��, 100�� : %d��, 50�� : %d��, 10�� : %d��", coin500, coin100, coin50, coin10);*/

    //8��
    /*num1 = 0;
    int hundreds = 0, tens = 0 ,ones = 0;
    printf("���ڸ� �Է����ּ���(�ִ� 999):");
    std::cin >> num1;
    hundreds = num1 / 100;
    tens = num1 % 100 / 10;
    ones = num1 % 100 % 10;
    printf("%d�� 100�� �ڸ��� %d, 10�� �ڸ��� %d, 1�� �ڸ��� %d �Դϴ�.", num1,hundreds, tens, ones);*/


    //0903�ǽ�
    //1��
    /*int num = 0;
    printf("���ڸ� �Է����ּ��� : ");
    std::cin >> num;
    if (num == 0)
        printf("0�Դϴ�.");
    else
        num > 0 ? printf("����Դϴ�.") : printf("�����Դϴ�.");*/

    //2��
    /*int num = 0;
        printf("���ڸ� �Է����ּ��� : ");
        std::cin >> num;
        if (num == 0)
            printf("0�Դϴ�.");
        else
            num %2 == 0 ? printf("¦���Դϴ�.") : printf("Ȧ���Դϴ�.");*/

    //3��
    /*int num1 = 0, num2 = 0;
            printf("ù ��° ���ڸ� �Է����ּ��� :");
            std::cin >> num1;
            printf("�� ��° ���ڸ� �Է����ּ��� :");
            std::cin >> num2;

            if (num1 == num2)
                printf("���� �� �Դϴ�.");
            else
                num1 > num2 ? printf("ū ���� %d �Դϴ�.", num1) : printf("ū ���� %d �Դϴ�.", num2);*/

    //4��
    /*const unsigned int LimitAge = 5;
                const float LimitHeight = 120.0f;
                int age = 0, height = 0;
                printf("���̸� �Է����ּ��� :");
                std::cin >> age;
                printf("Ű�� �Է����ּ��� :");
                std::cin >> height;

                if(age > LimitAge && height > LimitHeight)
                    printf("�ѷ��ڽ��� ž�� ����");
                else
                    printf("�ѷ��ڽ��� ž�� �Ұ���");*/

                    //5��
                    /*int score = 0;
                    printf("������ �Է����ּ��� : ");
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

                    //6��
                    /*int Score1 = 0, Score2 = 0, Score3 = 0;
                    printf("ù ��° ������ ������ �Է����ּ��� :");
                    std::cin >> Score1;
                    printf("�� ��° ������ ������ �Է����ּ��� :");
                    std::cin >> Score2;
                    printf("�� ��° ������ ������ �Է����ּ��� :");
                    std::cin >> Score3;

                    if (Score1 < 40 || Score2 < 40 || Score3 < 40)
                        printf("���հ�");
                    else
                       ((Score1 + Score2 + Score3) / 3.0f >= 60) ? printf("�հ�") : printf("���հ�");*/

                       //0904

                       //int flag = 0b1010;
                       ////0b0001 =���� Ű����������.
                       ////0b0010 =������ Ű����������.
                       ////0b0100 =���� Ű����������.
                       ////0b1000 =�Ʒ��� Ű����������.
                       //if ((flag & 0b0010) != 0b0000) {
                       //    //������ Ű�� �������ִ�;
                       //}
                       //else {
                       //    //������ Ű�� ������ ���� �ʴ�;
                       //}
                       ////enum ����鿡�� ����� �˾ƺ��� ���� �̸��ٿ� ����
                       //enum Key
                       //{
                       //    Up,
                       //    Down,
                       //    Left,
                       //    Right
                       //};
                       /*for (int i = 0; i < 10; i++)
                           {
                               printf("Hello %d",i); //�극��ũ ����Ʈ Ȱ���ϱ�
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

                           printf("�յ� ���� : ");
                           std::uniform_int_distribution<> uniformDis(1,100);
                           for (int i = 0; i < 10; i++) {
                               int Number = uniformDis(Generate);
                               printf("%d",Number);
                               if(i<9)
                               printf(", ");
                           }
                           printf("\n");

                           printf("���� ���� : ");
                           std::normal_distribution<> normalDis(80,10);
                           for (int i = 0; i < 10; i++) {
                               float Number = normalDis(Generate);
                               printf("%.2f", Number);
                               if (i < 9)
                                   printf(", ");
                           }
                           printf("\n");*/


                           //���ܽǽ�

                           //int num=0;
                           //printf("���ڸ� �Է�:");
                           //std::cin>>num;
                           //if((num & 0b0001) != 0) // == 0b0001 ���� § ���� 
                           //    printf("Ȧ���Դϴ�.");
                           //else
                           //    printf("¦���Դϴ�.");

                           //���ܽǽ�2

                           //1-1��
                           /*int InputNum = 1;
                           int sum =0;
                           while (InputNum != 0) {
                               printf("���ڸ� �Է��� �ּ���: ");
                               std::cin >> InputNum;
                               sum += InputNum;
                           }
                           printf("�Է¹��� ���� ��: %d", sum);*/

                           //1-2��
                           /*int InputNum = 1;
                           int sum = 0;
                           do {
                               printf("���ڸ� �Է��� �ּ���: ");
                               std::cin>>InputNum;
                               sum +=InputNum;
                           }
                           while(InputNum > 0);
                           printf("�Է¹��� ���� ��: %d",sum);*/

                           //2��
                           /*int InputNum=0;
                           printf("���ڸ� �Է����ּ���: ");
                           std::cin>>InputNum;
                           for(int i=1;i<10;i++)
                               printf("%d x %d = %d\n",InputNum,i,InputNum*i);*/

                               //3��
                               /*int InputNum = 0;
                               printf("���ڸ� �Է����ּ���: ");
                               std::cin >> InputNum;
                               for(int i=1;i<=InputNum;i+=2)
                                   printf("%d\n",i);*/

                                   //4��
                                   /*for(int i=1;i*7<100;i++)
                                       printf("%d\n", i*7);*/

                                       //5��
                                       /*int num =0;
                                       printf("���ڸ� �Է����ּ���: ");
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

                                       //0904�ǽ�

                                       //1��
                                       /*std::random_device RandomDivece;
                                       std::mt19937 Generate(RandomDivece());
                                       std::uniform_int_distribution<> uniformDis(1, 6);
                                       const int TestCount = 1000000;

                                       int Count = 0;
                                       for (int i = 0; i < TestCount; i++) { // �����ѹ� �Ű澲��
                                           int Number = uniformDis(Generate);
                                           //printf("%d ",Number);
                                           if(Number == 6)
                                               Count++;
                                       }
                                       printf("\n6�� %d�� ���Խ��ϴ�.",Count);
                                       */

                                       //2��
                                       /*enum SRP {
                                           Scissors=1,
                                           Rock,
                                           Paper
                                           //NUM_OF_RPS ������ ���� �������ټ� ���� �˾Ƶα�
                                       };
                                       int Player_WinScore=0;
                                       int Computer_WinScore=0;
                                       int Player_Input = 0;
                                       std::random_device RandomDivece;
                                       std::mt19937 Generate(RandomDivece());
                                       std::uniform_int_distribution<> uniformDis(1, 3);

                                       while (Player_WinScore < 3 && Computer_WinScore < 3){
                                           printf("����(1), ����(2) ,��(3) �� �ϳ��� �Է��� �ּ��� : ");
                                           std::cin>>Player_Input;
                                           int Computer_Input = uniformDis(Generate);

                                           if(Player_Input == Computer_Input)
                                               printf("�����ϴ�, ��ǻ��:%d �÷��̾�:%d\n",Computer_Input, Player_Input);
                                           else {
                                               if ((Player_Input == Scissors && Computer_Input == Rock) ||
                                                   (Player_Input == Rock && Computer_Input == Paper) ||
                                                   (Player_Input == Paper && Computer_Input == Scissors)) {
                                                   printf("�÷��̾� �й�, ��ǻ��:%d �÷��̾�:%d\n",Computer_Input,Player_Input);
                                                   Computer_WinScore++;
                                               }
                                               else {
                                                   printf("�÷��̾� �¸�, ��ǻ��:%d �÷��̾�:%d\n", Computer_Input, Player_Input);
                                                   Player_WinScore++;
                                               }
                                           }
                                       }
                                       if(Player_WinScore == 3)
                                           printf("�÷��̾� �����¸� , �÷��̾� �̱�Ƚ��:%d, ��ǻ�� �̱�Ƚ��:%d", Player_WinScore, Computer_WinScore);
                                       else
                                           printf("��ǻ�� �����¸�, �÷��̾� �̱�Ƚ��:%d, ��ǻ�� �̱�Ƚ��:%d", Player_WinScore, Computer_WinScore);*/

                                           //3��
                                           /*std::random_device RandomDivece;
                                           std::mt19937 Generate(RandomDivece());
                                           std::uniform_int_distribution<> uniformDis(1, 100);
                                           int Number = uniformDis(Generate);
                                           int InputNumber = 0;
                                           int flag = 1;
                                           printf("���ڸ� �Է����ּ��� (1~100) : ");
                                           //printf("%d",Number);
                                           for (int i = 4; i >= 0; i--) {
                                               std::cin >> InputNumber;
                                               if(InputNumber == Number){
                                                   printf("�����Դϴ�. �Է��� ����: %d, ����: %d , ����Ƚ��: %d\n",InputNumber,Number,i);
                                                   flag = 0;
                                                   break;
                                               }
                                               else if (InputNumber > Number) {
                                                   printf("�����Դϴ� �Է��� ���ں��� �۽��ϴ�. �Է��� ����: %d, ����Ƚ��: %d\n",InputNumber,i);
                                               }
                                               else
                                                   printf("�����Դϴ� �Է��� ���ں��� Ů�ϴ�. �Է��� ����: %d, ����Ƚ��: %d\n",InputNumber,i);
                                           }
                                           if (flag == 1) {
                                               printf("�й��ϼ̽��ϴ�. ������ %d �Դϴ�.",Number);
                                           }*/

                                           //4��
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
                                               printf("�κ��丮�� ���� �������� ����: 1.���� 2.���� 3.�߱���Ʈ 4.���� 5.������ 0.����:");
                                               std::cin>>InputNumber;

                                               switch (InputNumber)
                                               {
                                               case 1:
                                                   inventory = inventory | HPP;
                                                   printf("������ �κ��丮�� �־����ϴ�.\n");
                                                   break;
                                               case 2:
                                                   inventory = inventory | Gun;
                                                   printf("������ �κ��丮�� �־����ϴ�.\n");
                                                   break;
                                               case 3:
                                                   inventory = inventory | Bat;
                                                   printf("�߱���Ʈ�� �κ��丮�� �־����ϴ�.\n");
                                                   break;
                                               case 4:
                                                   inventory = inventory | Key;
                                                   printf("���踦 �κ��丮�� �־����ϴ�.\n");
                                                   break;
                                               case 5:
                                                   printf("����� �������� ���� : 1.���� 2.���� 3.�߱���Ʈ 4.����");
                                                   std::cin>>ThrowItem;
                                                   if (ThrowItem == 1) {
                                                       inventory = inventory ^ HPP;
                                                       printf("���ฦ ����Ͽ����ϴ�.\n");
                                                   }
                                                   else if (ThrowItem == 2) {
                                                       inventory = inventory ^ Gun;
                                                       printf("������ ����Ͽ����ϴ�.\n");
                                                   }
                                                   else if (ThrowItem == 3) {
                                                       inventory = inventory ^ Bat;
                                                       printf("�߱���Ʈ�� ����Ͽ����ϴ�.\n");
                                                   }
                                                   else if (ThrowItem == 4) {
                                                       inventory = inventory ^ Key;
                                                       printf("���踦 ����Ͽ����ϴ�.\n");
                                                   }
                                                   else
                                               case 0:
                                                   endflag = 1;
                                                   break;
                                               default:
                                                   break;
                                               }
                                           }*/

                                           //5��
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
                                                   printf("ù��° �÷��̾��� �ֻ��� �� : %d , ��ǻ���� �ֻ��� ��: %d , �÷��̾� �¸� ��ǻ�Ͱ� �����մϴ�.\n", PlayerDice, ComputerDice);
                                                   do {
                                                      Betting = rand() % ComputerMoney;
                                                   }
                                                   while(Betting > PlayerMoney);
                                                   printf("���� �ݾ��� %d�� �Դϴ�.\n", Betting);
                                                   PlayerDiceSum += PlayerDice;
                                                   ComputerDiceSum += ComputerDice;
                                               }
                                               else if (PlayerDice < ComputerDice) {
                                                   printf("ù��° �÷��̾��� �ֻ��� �� : %d , ��ǻ���� �ֻ��� ��: %d , ��ǻ�� �¸� �÷��̾ �����մϴ�.\n", PlayerDice, ComputerDice);
                                                   while(BettingEnd == 0){
                                                       printf("���� �ݾ��� �Է����ּ���: ");
                                                       std::cin >> Betting;
                                                       if (Betting > PlayerMoney || Betting > ComputerMoney) {
                                                           printf("���� �ݾ��� Ů�ϴ� �ٽ� �Է����ּ���.");
                                                       }
                                                       else {
                                                           break;
                                                       }
                                                   }
                                                   printf("���� �ݾ��� %d�� �Դϴ�.\n", Betting);
                                                   PlayerDiceSum += PlayerDice;
                                                   ComputerDiceSum += ComputerDice;
                                               }
                                               else {
                                                   printf("ù��° �ֻ������� �����ϴ�. �ֻ����� �ٽ� �����ϴ�.\n");
                                                   PlayerDice = uniformDis(Generate);
                                                   ComputerDice = uniformDis(Generate);
                                               }

                                               PlayerDice = uniformDis(Generate);
                                               ComputerDice = uniformDis(Generate);

                                               PlayerDiceSum += PlayerDice;
                                               ComputerDiceSum += ComputerDice;

                                               if (PlayerDiceSum > ComputerDiceSum) {
                                                   printf("�ι�° �÷��̾��� �ֻ��� �� : %d , ��ǻ���� �ֻ��� ��: %d , �÷��̾� �¸� .\n", PlayerDiceSum, ComputerDiceSum);
                                                   PlayerMoney +=Betting;
                                                   ComputerMoney -=Betting;
                                                   printf("�÷��̾� �����ݾ�: %d , ��ǻ�� �����ݾ�: %d\n",PlayerMoney,ComputerMoney);
                                               }
                                               else if (PlayerDiceSum < ComputerDiceSum) {
                                                   printf("�ι�° �÷��̾��� �ֻ��� �� : %d , ��ǻ���� �ֻ��� ��: %d , ��ǻ�� �¸�.\n", PlayerDiceSum, ComputerDiceSum);
                                                   PlayerMoney -= Betting;
                                                   ComputerMoney += Betting;
                                                   printf("�÷��̾� �����ݾ�: %d , ��ǻ�� �����ݾ�: %d\n", PlayerMoney, ComputerMoney);
                                               }
                                               else {
                                                   printf("�ֻ������� �����ϴ�. ������ ������մϴ�.\n");
                                               }
                                               PlayerDiceSum = 0;
                                               ComputerDiceSum = 0;
                                               Betting = 0;
                                           }
                                           if(PlayerMoney > ComputerMoney)
                                               printf("������ ����Ǿ����ϴ�. �÷��̾� �¸�");
                                           else
                                               printf("������ ����Ǿ����ϴ�. ��ǻ�� �¸�");*/

                                               //6��

                                               //srand(time(NULL));
                                               //int PlayerMoney = 100;
                                               //int PlayerChoice = 0;
                                               //int ComputerHoljjak = 0;
                                               //int Betting = 100;
                                               //int WinStreakChoice = 0;
                                               //int WinStreakCount = 0;
                                               //printf("���ӽ���\n");
                                               //while (PlayerMoney >= 100) {
                                               //    printf("�÷��̾� �����ݾ� %d\n",PlayerMoney);
                                               //    printf("Ȧ(1), ¦(2)�� �������ּ��� : ");
                                               //    ComputerHoljjak = rand() % 2 + 1;
                                               //    //printf("%d",ComputerHoljjak);
                                               //    std::cin >> PlayerChoice;
                                               //    if(PlayerChoice != 1 && PlayerChoice != 2){
                                               //        printf("�߸��� �Է��Դϴ� �ٽ��Է����ּ���. ");
                                               //        continue;
                                               //    }
                                               //    
                                               //    if (ComputerHoljjak == PlayerChoice) {
                                               //        printf("��ǻ�Ͱ� ���� ����� %d �Դϴ�. ���߼̽��ϴ�.\n",ComputerHoljjak);
                                               //    }
                                               //    else{
                                               //        printf("��ǻ�Ͱ� ���� ����� %d �Դϴ�. Ʋ���̽��ϴ�.\n", ComputerHoljjak);
                                               //            PlayerMoney -= Betting;
                                               //            if(PlayerMoney < 100 )
                                               //                break;
                                               //        }
                                               //    while (WinStreakChoice != 2) {
                                               //        printf("1. ���� ���� , 2. �ݾ� �ޱ� (���� ���� : %d): ",WinStreakCount);
                                               //        std::cin >> WinStreakChoice;
                                               //        if(WinStreakChoice != 1 && WinStreakChoice != 2){
                                               //            printf("�߸��� �Է��Դϴ� �ٽ��Է����ּ���. \n");
                                               //            continue;
                                               //        }
                                               //        if (WinStreakChoice == 1) {
                                               //            printf("���� ������ �����ϼ̽��ϴ�. \n");
                                               //            Betting *=2;
                                               //            WinStreakCount++;
                                               //            break;
                                               //        }
                                               //        else {
                                               //            PlayerMoney += Betting;
                                               //            Betting = 100;
                                               //            WinStreakChoice = 2;
                                               //            WinStreakCount = 0;
                                               //        }
                                               //    }
                                               //    WinStreakChoice = 0;
                                               //}
}

void Day0905() {
    //0905
    //int Number = Sum(1,7);
    //Number = Multiply(7);
    //TestRecurcive(5);
    /* float Number2 = Add(10.0f,20.4f);
     Add(1,3);

     int Number3 = Square(2);
     int Number4 = Number * Number;*/
     //1��
     /*int Number1 =0,Number2=0;

     printf("�� ���� ������ �Է� :");
     std::cin>>Number1>>Number2;
     printf("%d", Practice0905_1(Number1,Number2));*/

     //2��
     /*int Age = 0;
     printf("����� ���̸� �Է��� �ּ���: ");
     std::cin>>Age;
     printf("����� %d�� �Դϴ�.",Practice0905_2(Age));*/

     //3��
     /*float Radius = 0;
     printf("�������� �Է��� �ּ���: ");
     std::cin >> Radius;
     printf("���� ���� : %f", Practice0905_3(Radius));*/

     //4��
     /*int Number = 0;
     printf("���ڸ� �Է��� �ּ���: ");
     std::cin >> Number;
     if(Number == 0 )
         printf("0�� ¦���� Ȧ���� �ƴմϴ�");
     else{
         if (Practice0905_4(Number) == true)
             printf("Ȧ���Դϴ�.");
         else
             printf("¦���Դϴ�.");
     }*/

     //5��
     /*int Score = 0;
     printf("������ �Է��� �ּ���: ");
     std::cin >> Score;
     switch (Practice0905_5(Score))
     {
     case 0:
         printf("����� ������ A�Դϴ�");
         break;
     case 1:
         printf("����� ������ B�Դϴ�");
         break;
     case 2:
         printf("����� ������ C�Դϴ�");
         break;
     case 3:
         printf("����� ������ D�Դϴ�");
         break;
     case 4:
         printf("����� ������ E�Դϴ�");
         break;
     default:
         printf("������ �߸��Է��ϼ̽��ϴ�.");
         break;
     }*/

     //6��
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

         printf("����� �ұ�� 1. ������ �߰� 2. �����ۻ��� 3. ���� :");
         std::cin >> playerselect;

         switch (playerselect)
         {
         case 1:
         {
             printf("� �������� �߰��ұ��? [0:����,1:ǻ��,2:å,3:��Ʈ]");
             int additem = 0;
             std::cin >> additem;
             inventory = Practice0905_6_AddItem(inventory,additem);
             break;
         }
         case 2:
         {
             printf("� �������� �����ұ��? [0:����,1:ǻ��,2:å,3:��Ʈ]");
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
             printf("���� ");
         }
         if ((inventory & fuse) != 0) {
             printf("ǻ�� ");
         }
         if ((inventory & book) != 0) {
             printf("å ");
         }
         if ((inventory & note) != 0) {
             printf("��Ʈ ");
         }
         printf("\n");
     }*/

     //7��
     /*int Number = 0;
     printf("���ڸ� �Է����ּ���: ");
     std::cin >> Number;
     Practice0905_7(Number);*/

     //���ø� 1~3��
     /*int Number1,Number2,Number3;
     int Tmp;
     printf("ù��° ���ڸ� �Է�: ");
     std::cin>>Number1;
     printf("�ι�° ���ڸ� �Է�: ");
     std::cin>>Number2;
     printf("�������� %d, ū���� %d�Դϴ�.\n",Min(Number1,Number2),Max(Number1, Number2));


     if(Number1 > Number2){
         Tmp = Number1;
         Number1 = Number2;
         Number2 = Tmp;
     }

     printf("����° ���ڸ� �Է�: ");
     std::cin>>Number3;
     printf("%d",Clamp(Number3,Number1,Number2));
     return 0;*/

     //���丮��
     //printf("%d",factorial(5));
}