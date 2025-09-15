#define _CRT_SECURE_NO_WARNINGS
#define new new(_NORMAL_BLOCK, __FILE__,__LINE__)
#include <crtdbg.h> 

#include <iostream>
#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <random>
#include <time.h>
#include "TestMath.h"
#include "Practice0905.h"
#include "Practice0908.h"
#include "Practice0909.h"
#include "Practice0910.h"
#include "Practice0911.h"
#include "Practice0912.h"
#include "Practice0913.h"
#include "BlackJack.h"

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    srand(time(0));
    //Practice09061();
    //Practice09062();
    //Practice09063();
    //Practice09064();
    //Practice09065();
    //Practice09066();
    //Practice09067();
    //Practice09068();
    //Practice09069();
    //Practice090610();
    
    //Practice09081();
    //Practice09082();
    //Practice09083();

    //피셔-예이츠 셔플
    /*int Array[10] = {1,2,3,4,5,6,7,8,9,10};
    Shuffle(Array,10);*/
    //RefF();

    //Practice09084();
    //Practice09085();
    //Practice09086();
    //Practice09087();

    //Day0909();
    //Day09091();
    //DynamicAllocation();
    //DynamicAllocation2();

    //Practice09091();
    //Practice09092();
    //Day0911(); //미로 찾기
    //MazeEscapeRun();
    
    //ReadFile();
    //Day0910_String();

    /*Day0912_Struct();
    Day0912_OperatorOverloading();*/
    //Day0912_Position();

    //Practice09131();
    PlayBlackjack();
}
