//#include <stdio.h>				기본 7-8
//void main()
//{
//	int a, b;
//	while (1)
//	{
//		printf("더할 두 수 입력(멈추려면 0을 입력): ");
//		scanf("%d %d", &a, &b);
//		if (a == 0)
//			break;
//		printf("%d +%d = %d\n", a, b, a + b);
//	}
//	printf("0을 입력해서 for문을 탈출했습니다.\n");
//}

//#include <stdio.h>			 기본7~10
//void main()
//{
//	int hap = 0;
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			continue;
//		hap += i;
//	}
//	printf("1~100까지의 합(3의 배수 제외): %d\n", hap);
//}

//#include <stdio.h>			
//int main()
//{
//	int num1, num2;
//	printf("시작값 ==> ");
//	scanf("%d", &num1);
//	printf("끝값 ==> ");
//	scanf("%d", &num2);
//
//	int start = num1;
//	int end = num2;
//	if (start > end)
//	{
//		start = num2;
//		end = num1;
//	}
//
//
//
//	while (num1 < num2)
//	{
//		if (num1 % 2 != 0)
//		{
//			printf("%d ", num1);
//		}
//		num1+=1;
//	}
//	while (num1 > num2)
//	{
//		if (num1 % 2 != 0)
//		{
//			printf("%d ", num1);
//		}
//		num1 -= 1;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int num, i;
//    printf("숫자 입력(종료하려면 0): ");
//    scanf("%d", &num);
//    while (1)
//    {
//        if (num == 0)
//            break;
//        i = 0;
//        while (i < num * 2)
//        {
//            printf("\u2665");
//            i+=1;
//        }
//        printf("\n");
//    }
//    printf("프로그램을 종료합니다.\n");
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, hap = 0;
//	for (i = 123; i <= 456; i++)
//	{
//		goto myLable;
//		hap = hap + i;
//	}
//myLable:
//	printf(" %d\n", hap);
//
//}

//#include <stdio.h>		//카피
//#include <math.h>
//int main()
//{
//	int num=234,i,n=0;
//	//printf("숫자를 여러 개 입력: ");
//	//scanf("%d", &num);
//	int copy_num = num;
//	while (num > 0)
//	{
//		i = num / 10;
//		num = num / 10;
//		n += 1;
//		
//	}
//	int result = (int)pow(10, n - 1);
//	while (copy_num > 0)
//	{
//		int output = copy_num / result;	//output = 2, result = 100
//		printf("%d\n", output);
//		
//		copy_num %= result;	//copy_num = 34
//		result /= 10;	 // result = 10
//		while (output > 0)
//		{
//			printf("\u2665\u2665");
//			output -= 1;
//		}
//		printf("\n");
//		//printf("\u2665\n");
//	}


	//int output = copy_num / result;	//output = 2, result = 100
	//printf("%d\n", output);
	//copy_num %= result;	//copy_num = 34
	//result /= 10;	 // result = 10



	//output = copy_num / result;		//output = 3
	//printf("%d\n", output);
	////printf("%d\n", copy_num);
	//copy_num %= result;		//copy_num=4



	//printf("%d\n", copy_num);





	
//}


//\u2665






















//#include <stdio.h>												//진짜 ㄹㅈㄷ 어려움(2시간 20분동안 풀었어 ㅠㅠㅠ)
//#include <math.h>
//int main()
//{
//	int num, i, n = 0;
//	printf("숫자를 여러 개 입력: ");
//	scanf("%d", &num);
//	int copy_num = num;
//	while (num > 0)
//	{
//		i = num / 10;
//		num = num / 10;
//		n += 1;
//
//	}
//	int result = (int)pow(10, n - 1);
//	while (copy_num > 0)
//	{
//		int output = copy_num / result;	//output = 2, result = 100
//		copy_num %= result;	//copy_num = 34
//		result /= 10;	 // result = 10
//		while (output > 0)
//		{
//			printf("\u2665\u2665");
//			output -= 1;
//		}
//		printf("\n");
//		//printf("\u2665\n");
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do
//	{
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2.이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//	printf("게임을 종료합니다.\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int select;
//	enum {LOGIN, NEW, OPTION, MAKER};
//	do
//	{
//		printf("메뉴를 선택: \n");
//		printf("1.로그인 2.회원가입 3.옵션 4.만든 사람들\n");
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case LOGIN:
//			printf("로그인하기\n");
//			break;
//		case NEW:
//			printf("회원가입하기\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		case MAKER:
//			printf("제작자 목록\n");
//			break;
//		}
//	} 
//	while (select >= 1 && select <= 4);
//	printf("게임 종료.\n");
//	return 0;
//}








//#include <stdio.h>		//문제 2
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0, study =0;	//코딩
//	int play =0;			//게임
//	int playing = 0;		//기타
//	int health=0;			//운동
//	do
//	{
//		printf("\n%d번째 날! \n", ++day);
//		printf("오늘도 뭘 할까요?\n");
//		printf("1. 코딩 공부한다.\n");
//		printf("2. 게임하기\n");				//추가1
//		printf("3. 기타 연습하기\n");			//추가2
//		printf("4. 운동하러 나가기\n");		//추가3
//		printf("그외. 끝낸다.\n >>");
//		scanf_s("%d", &command);
//		if (command == 1) 
//		{
//			int randint = rand() % 5 + 1;
//			switch (randint)
//			{
//			case 1:
//				printf("기분이 좋네요.\n");
//			case 2:
//				printf("기분이 나빠요.\n");
//			case 3:
//				printf("도서관에서. ");
//				break;
//			case 4:
//				printf("카페에서 ");
//				break;
//			case 5:
//				printf("학원에서 ");
//				break;
//			}
//			printf("코딩 공부합시다.\n");
//			study++;
//		}
//
//
//		else if (command == 2)
//		{
//			int randint = rand() % 3 + 1;
//			switch (randint)
//			{
//			case 1:
//				printf("집에서 ");
//				break;
//			case 2:
//				printf("PC방에서 ");
//				break;
//			case 3:
//				printf("친구집에서 ");
//				break;
//			}
//			printf("게임을 하자!\n");
//			play++;
//		}
//
//
//
//		else if (command == 3)
//		{
//			int randint = rand() % 4 + 1;
//			switch (randint)
//			{
//			case 1:
//				printf("집에서 ");
//				break;
//			case 2:
//				printf("합주실에서 ");
//				break;
//			case 3:
//				printf("혼자 ");
//				break;
//			case 4:
//				printf("친구랑 ");
//				break;
//			}
//			printf("기타연습을 하자!\n");
//			playing++;
//		}
//
//
//
//		else if (command == 4)
//		{
//			int randint = rand() % 5 + 1;
//			switch (randint)
//			{
//			case 1:
//				printf("집에서 ");
//				break;
//			case 2:
//				printf("헬스장에서 ");
//				break;
//			case 3:
//				printf("운동장에서 ");
//				break;
//			case 4:
//				printf("혼자 ");
//				break;
//			case 5:
//				printf("친구랑 ");
//				break;
//			}
//			printf("운동을 하자!\n");
//			health++;
//		}
//
//		else
//		{
//			break;
//		}
//
//		
//
//	} 
//	while (1);
//	if (day <= 3)
//	{
//		printf("그대로입니다...\n");
//	}
//	else if(study >play && study >playing && study > health)
//	{
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:
//			printf("코딩새싹이 되었습니다!\n");
//			break;
//		case 1:
//			printf("프로그래머가 되었습니다!\n");
//			break;
//		case 2:
//			printf("FrontEnd 개발자가 되었습니다!\n");
//			break;
//		case 3:
//			printf("BackEnd 개발자가 되었습니다!\n");
//			break;
//		default:
//			printf("풀스택 개발자가 되었습니다!\n");
//			break;
//		}
//	}
//
//	else if (play > study && play > playing && play > health)
//	{
//		int level = play / 8;
//		switch (level)
//		{
//		case 0:
//			printf("입문자가 되었습니다!\n");
//			break;
//		case 1:
//			printf("중급자가 되었습니다!\n");
//			break;
//		case 2:
//			printf("상급자가 되었습니다!\n");
//			break;
//		default:
//			printf("프로게이머가 되었습니다!\n");
//			break;
//
//		}
//	}
//
//	else if (playing > study && playing > play && playing > health)
//	{
//		int level = playing / 8;
//		switch (level)
//		{
//		case 0:
//			printf("음악 입문자이 되었습니다!\n");
//			break;
//		case 1:
//			printf("기타 초보가 되었습니다!\n");
//			break;
//		case 2:
//			printf("기타 연주가가 되었습니다!\n");
//			break;
//		case 3:
//			printf("음악 학원 원장이 되었습니다!\n");
//			break;
//		default:
//			printf("유명 밴드가 되었습니다!\n");
//			break;
//		}
//	}
//
//
//
//	else //if (health > study && health > play && health > playing)
//	{
//		int level = health / 8;
//		switch (level)
//		{
//		case 0:
//			printf("운동 초보가 되었습니다!\n");
//			break;
//		case 1:
//			printf("헬린이가 되었습니다!\n");
//			break;
//		case 2:
//			printf("헬창이 되었습니다!\n");
//			break;
//		case 3:
//			printf("헬스 유튜버가 되었습니다!\n");
//			break;
//		default:
//			printf("보디빌더가 되었습니다!\n");
//			break;
//		}
//	}
//	return 0;
//}





//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)					//sheep+=1, sheep++
//	{
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//		if (sheep == 3)
//		{
//			printf("도중에 잠들었다!\n");
//			break;
//		}
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int sheep;
	for (sheep = 1; sheep <= 5; sheep++)
	{
		if (sheep == 3)
		{
			printf("졸아서 양을 세지 못했다!\n");
			continue;
		}
		printf("양 %d마리\n", sheep);
	}
	return 0;
}