// 0903.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    //float number1 = 10.0f; //float 타입의 값 float에 넣기
    //float number2 = 15.0; // double 타입의 값 float에 넣기

    //std::cin >> number1 >> number2;
    //printf("number1: %f \nnumber2: %.2f \n", number1, number2);

    /*float radius = 0.0f;
    const float Pi = 3.14f;
    printf("원의 반지름 입력:");
    std::cin >> radius;
    printf("원의 넓이는 : %.3f", radius * radius * PI)*/

    //int square = 0;
    //printf("정사각형의 한변의 길이 입력:");
    //std::cin >> square;
    //printf("정사각형의 넓이는 : %d", square * square); //오버플로우 발생 가능

    /*float a = 10.0f;
    float b = 0.0f;

    std::cin >> b;

    bool result = a == b;*/

    /*float epsilon = 0.001f;

    a < (b + epsilon);
    a > (b - epsilon);*/

    //1번
    /*int num1 = 0;
    printf("숫자를 입력해주세요 : ");
    std::cin >> num1;
    if (num1 > 0)
        printf("양수입니다.");
    else if(num1 < 0)
        printf("음수입니다.");
    else
        printf("0입니다.");*/
    
    //2번
    /*int num1 = 0;
    printf("숫자를 입력해주세요 : ");
    std::cin >> num1;
    if (num1 == 0)
        printf("0입니다.");
    else
        (num1 % 2 == 0) ? printf("짝수입니다"):printf("홀수입니다");*/

    //3번
   /* int num1 = 0, num2 = 0;
    printf("숫자 두개를 입력해주세요 :");
    std::cin >> num1 >> num2;
    if (num1 == num2)
        printf("같은 숫자입니다.");
    else
        num1 > num2 ? printf("%d", num1) : printf("%d", num2);*/

    //4번
    /*int age = 0,height = 0;
    printf("나이와 키를 입력해주세요 : ");
    std::cin >> age >> height;

    if (age >= 6 && height >= 120)
        printf("탑승가능");
    else
        printf("불가능");*/

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
    int score1 = 0, score2 = 0, score3 = 0;
    printf("세 과목의 점수를 입력해주세요 : ");
    std::cin >> score1 >> score2 >> score3;

    if (score1 < 40 || score2 < 40 || score3 < 40)
        printf("불합격");
    else
        ((score1+score2+score3)/3 >= 60) ? printf("합격"): printf("불합격");
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
