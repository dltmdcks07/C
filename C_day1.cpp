//#include <stdio.h>
//int main()
//{
//	printf("안녕하세요\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("안녕하세요");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("안녕하세요\n안녕하세요안녕하세요\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("안녕하세요\n");
//	printf("안녕하세요");
//	printf("안녕하세요\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("사과 1개\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("키보드 3개\n");
//	printf("마우스 2개\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 1;
//	printf("사과 %d개\n", apple);
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드: %d개 \n", keyboard);
//	printf("마우스: %d개\n", mouse);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d +%d=%d\n",
//		coin1, coin2, coin1 + coin2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char A;
//	A = 'A';
//	printf("A=%c,A=%d\n", A, A);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi=%.2lf,e=%.3f..\n", pi, e);
//	return 0;
//}



//#include <stdio.h>			// 문제 1
//int main()
//{
//	float pi = 3.14;
//	int r = 5;
//	float a = r * r * pi;
//	float b = 2 * pi * r;
//	printf("반지름의 길이가 5인 원의 넓이: %.1f \n", a);
//	printf("반지름의 길이가 5인 원의 둘레: %.1f", b);
//	return 0;
//}



//#include <stdio.h>			//문제 2
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 7;
//	float d = (a + b) * c / 2;
//	printf("밑변 3, 윗변 5, 높이 7인 사다리꼴의 넓이: %.1f", d);
//	return 0;
//}



//#include <stdio.h>										//질문(scanf, &k) 
//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf_s("%d" , &k);
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf_s("%d %d", &y, &x);
//	printf("두 값의 합은 %d입니다.\n", y + x);
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS							//질문(#define)
//#include <stdio.h>
//int main()
//{
//	char a, b, c;
//	printf("문자 두 개 입력: ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자출력 : %c%c%c\n", a, b, c);
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS			//문제 3
//#include <stdio.h>
//int main()
//{
//	int r;
//	float pi = 3.14;
//	printf("반지름의 길이: ");
//	scanf("%d", &r);
//	printf("원의 넓이: %.2f", r * r * pi);
//	return 0;
//}



//#include <stdio.h>			//문제 4
//int main()
//{
//	int W1, W2, H;
//	printf("밑변, 윗변, 높이: ");
//	scanf_s("%d%d%d", &W1, &W2, &H);
//	printf("사다리꼴의 넓이: %d ", (W1 + W2) * H / 2);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number = 1;
//	number += 3;
//	printf("%2d\n", number);
//	number -= 2;
//	printf("%2d\n", number);
//	number--;
//	printf("%2d\n", number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS			//문제 1
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	printf("변수 2개 입력: ");
//	scanf("%d %d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}



//#include <stdio.h>				//% =  나눗셈을 하고 난 나머지를 구해
//int main()
//{
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number1, number2;
//	printf("숫자 2개 입력: ");
//	scanf_s("%d %d", &number1, &number2);
//	printf("%d = number1%%4\n", number1 % 4);
//	printf("%d = number2%%3\n", number2 % 3);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int fisrt = 1 % 3;
//	printf("%d = 1%%3\n", fisrt);
//	int second = 2 % 3;
//	printf("%d = 2%%3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3%%3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4%%4\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5%%3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6%%3\n", sixth);
//	return 0;
//}



//#include <stdio.h>			//문제2
//int main()
//{
//	int num;
//	printf("숫자를 입력하세요: ");
//	scanf_s("%d", &num);
//	printf("%d %% 50 = %d", num, num % 50);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d =6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d =6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d =6/4\n", data3);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number1, number2;
//	printf("숫자 2개 입력: ");
//	scanf_s("%d %d", &number1, &number2);
//	printf("%d=", number1 / number2);
//	printf("%d/%d\n", number1, number2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int coin;
//	printf("돈을 입력해주세요.(원)");
//	scanf_s("%d", &coin);
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개, ", coin10000);
//	printf("오천원권 %d게, ", coin5000);
//	printf("천원권 %d개, ", coin1000);
//	printf("나머지는 동전입니다.");
//	return 0;
//}



//#include <stdio.h>			//문제 3
//int main()
//{
//	int coin = 1000;
//	printf("젤리 가격을 입력하세요: ");
//	scanf_s("%d", &coin);
//	coin = 1000 - coin;
//	int coin500 = coin / 500;
//	coin %= 500;
//	int coin100 = coin / 100;
//	coin %= 100;
//	int coin50 = coin / 50;
//	coin %= 50;
//	int coin10 = coin / 10;
//	coin %= 10;
//	printf("500원 %d개, ", coin500);
//	printf("100원 %d개, ", coin100);
//	printf("50원 %d개, ", coin50);
//	printf("10원 %d개\n", coin10);
//	printf("총 거스름 돈: %d원", coin500 * 500 + coin100 * 100 + coin50 * 50 + coin10 * 10);
//	return 0;
//}