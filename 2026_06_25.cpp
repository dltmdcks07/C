//#include <stdio.h>
//int main()
//{
//	int W1, W2, H;
//	printf("밑변, 윗변, 길이 입력: ");
//	scanf("%d %d %d", &W1, &W2, &H);
//	float a = (W1 + W2) * H / 2.0;
//	printf("사다리꼴의 넓이: %.1f", a);
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

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("첫숫자: %d\n", randInt);
//	printf("다음숫자: %d", nextInt);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	int afterInt = rand() % 10 + 50;
//	printf("첫숫자 : %d\n", randInt);
//	printf("다음숫자 : %d\n", nextInt);//최소: 0, 최대: 9
//	printf("그다음숫자 : %d", afterInt);//최소: 50, 최대: 59
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000; //최소: 1000, 최대: 10000
//	printf("%d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500;			//최소: 0, 최대: 1500
//	int coin100 = rand() % 5000;			//최소: 0, 최대: 4999
//	coin100 = coin100 / 100 * 100;			//최소: 0, 최대: 4900
//	printf("그리고 과자의 가격은");
//	printf("%d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple == 15)
//	{
//		printf("apple은 15개 있습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple != 17)
//	{
//		printf("apple은 17개가 아닙니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple > 7)
//	{
//		printf("apple은 7개보다 많습니다. \n");
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20)
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("값을 입력하세요.");
//	scanf("%d", &a);
//	if (a > 0)
//	{
//		printf("양수입니다. \n");
//	}
//	else if (a == 0)
//	{
//		printf("0입니다. \n");
//	}
//	else
//	{
//		printf("음수입니다. \n");
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int a;
//	printf("변수를 입력하세요.");
//	scanf("%d", &a);
//
//
//	if (a >= 10 && a <= 99)
//	{
//		printf("두자리 숫자입니다.");
//	}
//
//	else
//				//if (a < 10 || a>99)
//	{
//		printf("두 자리 숫자가 아닙니다.\n");
//	}
//	
//	return 0;
//}


//#include <stdio.h>
//int main()
//{ 
//		int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple)
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (!apple)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int apple = 0;
//	if (apple == 10)
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0)
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다. \n");
//	}
//	else if (height > 160)
//	{
//		printf("키는 160 이상입니다. \n");
//	}
//	return 0;
//}



//#include <stdio.h>			//문제 3
//int main()
//{
//	int y_age;
//	printf("나이를 입력하세요.");
//	scanf("%d", &y_age);
//
//	if (y_age >= 15)
//	{
//		printf("15세 관람가, ");
//	}
//	if (y_age >= 12)
//	{
//		printf("12세 관람가, ");
//	}
//	
//	printf("전체 관람가");
	

	//if (y_age >= 15)
	//{
	//	printf("전체 관람가, 12세 관람가, 15세 관람가");
	//}
	//else if (y_age >= 12)
	//{
	//	printf("전체 관람가, 12세 관람가");
	//}
	//else
	//{
	//	printf("전체 관람가");
	//}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//char initial;
//	printf("문자 하나 입력: ");
//	scanf("%c", &initial);
//	if (initial >= 65 && initial <= 'Z')
//	{
//		printf("대문자입니다. \n");
//	}
//	else if (initial >= 0x61 && initial <= 0x7a)
//	{
//		printf("소문자입니다.");
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//	{
//		printf("숫자1이 숫자 2보다 큽니다.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("숫자2가 숫자1보다 큽니다.\n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다.\n");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//	{
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자 2가 숫자1보다 큽니다.\n");
//	}
//	else
//	{
//		printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int score = 75;
//	if (score > 90)
//	{
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80)
//	{
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70)
//	{
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60)
//	{
//		printf("성적은 D등급입니다.");
//	}
//	else
//	{
//		printf("성적은 F등급입니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요:");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//	case 'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number = -11;
//	if (number > 0)
//	{
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0)
//	{
//		printf("number는 음수입니다.\n");
//	}
//	else
//	{
//		printf("number는 0입니다.\n");
//	}
//	if (number % 2 == 0)
//	{
//		printf("number는 짝수입니다.\n");
//	}
//	else
//	{
//		printf("number는 홀수입니다.\n");
//	}
//	return 0;
//}



//#include <stdio.h>			//문제 5
//int main()
//{
//	char input;
//	printf("방향키를 입력하세요.\n");
//	scanf("%c", &input);
//	if (input == 'w')
//	{
//		printf("위 방향키를 입력하셨습니다.\n");
//	}
//	else if (input == 'a')
//	{
//		printf("좌 방향키를 입력하셨습니다.\n");
//	}
//	else if (input == 's')
//	{
//		printf("아래 방향키를 입력하셨습니다.\n");
//	}
//	else if (input == 'd')
//	{
//		printf("우 방향키를 입력하셨습니다. \n");
//	}
//	return 0;
//}



//#include <stdio.h>			//문제 6
//int main()
//{
//	int guage;
//	printf("guage를 입력하세요.\n");
//	scanf("%d", &guage);
//	if (guage >= 45 && guage <= 55)
//	{
//		printf("Perfect");
//	}
//	else if (guage >= 35 && guage <= 65)
//	{
//		printf("Excellent");
//	}
//	else
//	{
//		printf("Good");
//	}
//	return 0;
//}



//#include <stdio.h>			//문제 7
//int main()
//{
//	int input;
//	printf("임의의 숫자를 입력하세요.\n");
//	scanf("%d", &input);
//	if (input % 3 == 0)
//	{
//		if (input % 9 == 0)
//		{
//			printf("9의 배수, ");
//		}
//		if (input % 6 == 0)
//		{
//			printf("6의 배수, ");
//		}
//		printf("3의 배수");
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//		break;
//	case 'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("커맨드를 입력하세요.");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//		break;
//	case 'm': printf("지도차 오픈\n");
//		break;
//	default: printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3: printf("three\n"); break;
//	}
//	return 0;
//}



//#include <stdio.h>			//문제 1
//int main()
//{
//	int input1, input2;
//	char oper;
//	printf("숫자를 입력하세요.");
//	scanf("%d %d", &input1, &input2);
//	printf("oper를 입력하세요.");
//	scanf(" %c", &oper);
//
//	int result = 0;
//	switch (oper)
//	{
//	case '+': result = input1 + input2; break;
//	case '-': result = input1 - input2; break;
//	case '*': result = input1 * input2; break;
//	case '/': result = input1 / input2; break;
//	case '%': result = input1 % input2; break;
//	}
//
//	printf("%d %c %d = %d ", input1, oper, input2, result);
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int month;
//	printf("숫자를 입력하세요.");
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1: printf(" 1 > J"); break;
//	case 2: printf(" 2 > F"); break;
//	case 3: printf(" 3 > M"); break;
//	case 4: printf(" 4 > A"); break;
//	case 5: printf(" 5 > M"); break;
//	case 6: printf(" 6 > J"); break;
//	case 7: printf(" 7 > J"); break;
//	case 8: printf(" 8 > A"); break;
//	case 9: printf(" 9 > S"); break;
//	case 10: printf(" 10 > O"); break;
//	case 11: printf(" 11 > N"); break;
//	case 12: printf(" 12 > D"); break;
//	}
//	return 0;
//}