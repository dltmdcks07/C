//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b;
//	int result;
//	char k;
//	printf("첫 번째 계산할 값 ==> ");
//	scanf("%d", &a);
//	printf("+ - * / %% ==> ");
//	scanf(" %c", &k);
//	printf("두 번째 계산할 값 ==> ");
//	scanf("%d", &b);
//	if (k == '+')
//	{
//		result = a + b;
//		printf(" %d + %d = %d\n", a, b, result);
//	}
//	if (k == '-')
//	{
//		result = a - b;
//		printf(" $d - $d = $d\n", a, b, result);
//	}
//	if (k == '*')
//	{
//		result = a * b;
//		printf(" %d * %d = %d\n", a, b, result);
//	}
//	if (k == '/')
//	{
//		if (b != 0)
//		{
//			result = a / b;
//			printf("%d /%d = %d\n", a, b, result);
//		}
//		else
//			printf("0으로 나누면 안됩니다.\n");
//	}
//	if (k == '%')
//	{
//		if (b != 0)
//		{
//			result = a % b;
//			printf("%d %% %d = %d\n", a, b, result);
//		}
//		else
//			printf("0으로 나누면 안됩니다.\n");
//	}
//}


//#include <stdio.h>
//int main()
//{
//	char command;
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽이동 \n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case '<':
//	case 'a':
//		printf("왼쪽으로 이동합니다. \n");
//		break;
//	case '>':
//	case 'd':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//}



//#include <stdio.h>			//문제 4
//int main()
//{
//	int input;
//	const int option = 3;
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2.이어하기 3.옵션\n");
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 1:
//		printf("새 게임 시작.\n");
//		break;
//	case 2:
//		printf("세이브 테이터 로드.\n");
//		break;
//	case option:
//		printf("옵션 세팅.\n");
//		break;
//	default :
//		printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("숫자를 입력하세요.\n");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 3:
//	case 6:
//	case 9:
//		printf("짝\n");
//		break;
//	default:
//		printf("기능 없음.\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command = 'x';
//	switch (command)
//	{
//	case 'x':
//		printf("알파벳 x 입력.\n");
//		break;
//	default:
//		printf("엑스표 입력.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//	case 2:
//		int number3, number4;
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//		{
//			int number1, number2;
//			printf("숫자 두 개를 입력하세요 \n");
//			scanf(" %d %d", &number1, number2);
//			printf("%d + %d = %d\n", number1, number2, number1 + number2);
//			break;
//		}
//	case 2:
//		{
//			int number3, number4;
//			printf("숫자 두개를 입력하세요 \n");
//			scanf("%d %d", &number3, &number4);
//			printf("%d -%d = %d\n", number3, number4, number3 - number4);
//			break;
//		}
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	char Str;
//	printf("방향키를 입력하세요. \n");
//	scanf("%c", &Str);
//	switch (Str)
//	{
//	case 'w':
//		printf("위 방향키를 입력하셨습니다.\n");
//		break;
//	case 'a':
//		printf("좌 방향키를 입력하셨습니다.\n");
//		break;
//	case 's':
//		printf("아래 방향키를 입력하셨습니다.\n");
//		break;
//	case 'd':
//		printf("우 방향키를 입력하셨습니다.\n");
//		break;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int appetizer, mainDish, dessert;
//	printf("1.캐비어 2.샐러드 3.푸아그라\n");
//	printf("1.스테이크 2.생선요리 3.양갈비\n");
//	printf("1.케잌 2.아이스크림 3.초콜릿무스\n");
//	scanf("%d %d %d", &appetizer, &mainDish, &dessert);
//	switch (appetizer)
//	{
//	case 1:
//		printf("캐비어\n");
//		break;
//	case 2:
//		printf("샐러드\n");
//		break;
//	case 3:
//		printf("푸아그라\n");
//		break;
//	}
//	switch (mainDish)
//	{
//	case 1:
//		printf("스테이크\n");
//		break;
//	case 2:
//		printf("생선요리\n");
//		break;
//	case 3:
//		printf("양갈비\n");
//		break;
//	}
//	switch (dessert)
//	{
//	case 1:
//		printf("케잌\n");
//		break;
//	case 2:
//		printf("아이스크림\n");
//		break;
//	case 3:
//		printf("초콜릿무스\n");
//		break;
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int appetizer, mainDish, dessert;
//	printf("1.캐비어 2.샐러드 3.푸아그라\n");
//	printf("1.스테이크 2.생선요리 3.양갈비\n");
//	printf("1.케잌 2.아이스크림 3.초콜릿무스\n");
//	scanf("%d %d %d", &appetizer, &mainDish, &dessert);
//
//	printf("주문한 음식은 ");
//	switch (appetizer)
//	{
//	case 1:
//		printf("캐비어, ");
//		break;
//	case 2:
//		printf("샐러드, ");
//		break;
//	case 3:
//		printf("푸아그라, ");
//		break;
//	}
//	switch (mainDish)
//	{
//	case 1:
//		printf("스테이크, ");
//		break;
//	case 2:
//		printf("생선요리, ");
//		break;
//	case 3:
//		printf("양갈비, ");
//		break;
//	}
//	switch (dessert)
//	{
//	case 1:
//		printf("케잌");
//		break;
//	case 2:
//		printf("아이스크림");
//		break;
//	case 3:
//		printf("초콜릿무스");
//		break;
//	}
//	printf("입니다.\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x) ", i, i);
//		if (i >= 70 && i < 80) { i++; continue; }
//		if (i % 10 == 9)
//			printf("\n");
//		if (i == 93)
//			break;
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	while (0)
//	{
//		printf("조건이 참일 경우 반복 출력\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일 경우 반복 출력\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	while (count < 3)
//	{
//		printf("현재 count: %d\n", count);
//		printf("count가 3보다 작은 동안 반복 \n");
//		count++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count > 0)
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count = 1;
//	while (count <= 6)
//	{
//		printf("c");
//		count += 1;
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int num= -10;
//	while (num <= 0)
//	{
//		printf("%d ", num);
//		num += 1;
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int num=0;
//	while (num <= 100)
//	{
//		//if (num % 5 == 0)
//		{
//			printf("%d ", num);
//		}
//		//num += 1;
//		num += 5;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char alphabet;
//	while (1)
//	{
//		printf("알파벳을 입력해주세요(다른것 입력시 다시 입력): ");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다.\n");
//		}
//		else 
//		{
//			continue;
//		}
//		printf("입력한 값: %c\n", alphabet);
//	}
//}
//#include <stdio.h>
//int main()
//{
//	int number, total = 0;
//	while (1)
//	{
//		printf("양수를 입력해주세요(0입력시 종료);");
//		scanf("%d", &number);
//		if (number == 0)
//		{
//			break;
//		}
//		else if (number < 0)
//		{
//			continue;
//		}
//		total += number;
//		printf("%d\n", total);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number = 1;
//	int multi = 1;
//	while(multi <= 50000) 
//	{
//		number += 1;
//		multi = multi * number;
//	}
//	printf("%d", number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char alphabet='A';
//	while (alphabet <= 'Z')
//	{
//		if (alphabet == 'F')
//		{
//			alphabet += 1;
//		}
//		printf("%c", alphabet);
//		alphabet += 1;
//	}
//	return 0;
//}
// 
// 
// 
//#include <stdio.h>
//int main()
//{
//	int total=0;
//	int player1 = 1;
//	while (1)
//	{
//		if (player1 % 2 == 1)
//		{
//			printf("A: ");
//			scanf("%d", &player1);
//			total += player1;
//		}
//		else
//		{
//			printf("B: ");
//			scanf("%d", &player1);
//			total += player1;
//		}
//	}
//
//}
//#include <stdio.h>					내가 만든거
//int main()
//{
//	int player,total=0;
//	int turn=1;
//	while (1)
//	{
//		if (turn % 2 == 1) 
//		{
//			printf("A: ");
//			scanf("%d", &player);
//			if (player > 3 || player <1)
//			{
//				printf("다시 입력해주세요.\n");
//				continue;
//			}
//			total += player;
//			printf("=>%d\n", total);
//			turn += 1;
//			if (total > 31)
//			{
//				break;
//			}
//		}
//		else 
//		{
//			printf("B: ");
//			scanf("%d", &player);
//			if (player > 3 || player < 1)
//			{
//				printf("다시 입력해주세요.\n");
//				continue;
//			}
//			total += player;
//			printf("=>%d\n", total);
//			turn += 1;
//			if (total > 31)
//			{
//				break;
//			}
//		}
//		//if (total > 31)
//		//{
//		//	break;
//		//}
//	}
//	if (turn % 2 == 1)
//	{
//		printf("A가 이겼습니다.");
//	}
//	else
//		printf("B가 이겼습니다.");
//}


//
//#include <stdio.h>						여기부턴 선생님이 만드신거
//int main()
//{
//	int input, total = 0;
//	int player = 0;
//	while (1)
//	{
//		if (player == 0)
//		{
//			printf("A: ");
//		}
//		else {
//			printf("B: ");
//		}
//
//		scanf("%d", &input);
//		if (input > 3 || input < 1)
//		{
//			printf("다시 입력해주세요.\n");
//			continue;
//		}
//		total += input;
//		printf("=>%d\n", total);
//
//		if (total > 31)
//		{
//			break;
//		}
//
//
//		if (player == 0)
//		{
//			player = 1;
//		}
//		else {
//			player = 0;
//		}
//		
//	}
//	if (player== 1)
//	{
//		printf("A가 이겼습니다.");
//	}
//	else
//		printf("B가 이겼습니다.");
//}



//#include <stdio.h>
//int main()
//{
//	int input, total = 0;
//	int player = 0;
//	while (1)
//	{
//		printf("%c: ", 'A' + player);
//		scanf("%d", &input);
//		if (input > 3 || input < 1)
//		{
//			printf("다시 입력해주세요.\n");
//			continue;
//		}
//		total += input;
//		printf("=>%d\n", total);
//
//		//player = !player;
//		if (total > 31)
//		{
//			break;
//		}
//		player++;
//		player %= 26;
//	}
//
//	//printf("%c가 이겼습니다.", 'A' + player);
//	printf("%c가 졌습니다.", 'A' + player);
//}														여기까지

//#include <stdio.h>
//int main()
//{
//	int temperature = 20;
//	do
//	{
//		printf("현재 온도: %d도\n", temperature);
//		temperature--;
//	} while (temperature > 20);
//	return 0;
//}
