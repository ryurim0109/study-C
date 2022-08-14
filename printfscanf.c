#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include <stdio.h>
int main(void)
{
  //정수 변수 출력
  // int age = 12;
  // printf("%d", age);
  // age = 13;
  // printf("%d", age);
  //실수 변수 출력
  float f = 46.5f;
  printf("%.2f", f);
  // 상수로 선언
  const int YEAR = 2000;
  printf("태어난 년도: %d", YEAR);
  printf("%d * %d = %d", 3, 7, 3 * 7);

  //scanf
  //키보드 입력을 받아서 저장

  // int a, b, c;
  // scanf_s("%d %d %d", &a, &b, &c);

  return 0;
}