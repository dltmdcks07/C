//#include <stdio.h>
//void main()
//{
//	printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^\n");
//	printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^\n");
//	printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^\n");
//	printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^\n");
//	printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^\n");
//}


//#include <stdio.h>
//void main()
//{
//	int i;
//	for(i=0;i<5; i++)
//	{
//		printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^\n");
//	}
//}


//#include <stdio.h>
//void main()
//{
//	int i;
//	for(i=0; i<3; i++)
//	{
//		printf("안녕하세요?\n");
//		printf("##또 안녕하세요?##\n");
//	}
//	printf("\n\n");
//	for(i=0; i<3; i++)
//		printf("안녕하세요?\n");
//		printf("##또 안녕하세요?##\n");
//}


//#include <stdio.h>
//void main()
//{
//	int i;
//	for(i=5 ; i>0; i--)
//	{
//		printf("%d: 안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^\n",i);
//	}
//}


//#include <stdio.h>
//void main()
//{
//	int hap;
//	hap = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
//	printf("1부터 10까지의 합: %d.\n", hap);
//}


//#include <stdio.h>
//void main()
//{
//	int hap = 0;
//	int i;
//	for(i=0; i<=10; i++)
//	{
//		hap += i;
//	}
//	printf("1부터 10까지의 합: %d\n", hap);
//}


//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++)
//	{
//		if (sheep % 10 == 0)
//		{
//			printf("졸았다\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//		if (sheep == 45)
//		{
//			break;
//		}
//	}
//	printf("잠들었다!");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 0; round <= 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int round;
//	for (round = 1; round <= 10; round++)
//	{
//		printf("라운드 %d\n", round );
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("아파트 %d동\n", count);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++)
//	{
//		sum_number += number;
//	}
//	printf("도합 %d\n", sum_number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요: ");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("삐약");
//	}
//	printf("\n");
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int num;
//	for (num = 10; num <= 99; num++)
//	{
//		printf("%d \n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num, total=1;
//	for (num = 3; num <= 8; num++)
//	{
//		total *= num;
//	}
//	printf("총: %d",total);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num, clap=0;
//	for (num = 1; num <= 50; num++)
//	{
//		clap += 1;
//		if (clap % 10 == 3 || clap %10 ==6 || clap %10 ==9 || clap / 10 ==3)
//		{
//			printf("%d ", num);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number;
//	printf("100 이하의 제곱수를 출력합니다.\n");
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num;
//	printf("100이하 7의 배수를 출력합니다.\n");
//	for (num = 7; num <= 100; num += 7)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char input;
//	for (;;)
//	{
//		scanf("%c", &input);
//		switch (input)
//		{
//		case 's':
//			printf("START GAME\n");
//			break;
//		case 'e':
//			printf("EXIT GAME\n");
//			return 0;
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력: ");
//	for (number = 10, exitFor = number - 1; exitFor; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number, exitFor;
//	printf("1부터 10까지 곱한 수 출력: ");
//	for ( number = 10, exitFor = number - 1; exitFor; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++)
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num;
//	for (num = 11; num <= 200; num += 11)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	float sqLine;
//	for (sqLine = 1; sqLine*4 <= 21; sqLine+=0.1)
//	{
//		printf("%.1f \n", sqLine);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d반 %d번 \n", myClass, student);
//	student++;
//	printf("%d반 %d번 \n", myClass, student);
//	student++;
//	printf("%d반 %d번 \n", myClass, student);
//	student++;
//
//	myClass++; student = 1;
//	printf("%d반 %d번 \n", myClass, student);
//	student++;
//	printf("%d반 %d번 \n", myClass, student);
//	student++;
//	printf("%d반 %d번 \n", myClass, student);
//	student++;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번 \n", myClass, student);
//	}
//	myClass++;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번 \n", myClass, student);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 2; myClass++)
//	{
//		for (student = 1; student <= 3; student++)
//		{
//			printf("%d반 %d번 \n", myClass, student);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++)
//	{
//		for (student = 1; student <= 30; student++)
//		{
//			printf("%d반 %d번 \n", myClass, student);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; grade++)
//	{
//		for (myClass = 1; myClass <= 8; myClass++)
//		{
//			for (student = 1; student <= 30; student++)
//			{
//				printf("%d학년 %d반 %d번 \n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{ 
//	int first_num, num;
//	for (first_num = 2; first_num <= 9; first_num++)
//	{
//		for (num = 1; num <= 9; num++)
//		{
//			printf("%d * %d = %d \n", first_num, num, first_num * num);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int first_num, num;
//	for (first_num = 2; first_num <= 9; first_num++)
//	{
//		if (first_num == 3)
//		{
//			continue;
//		}
//		for (num = 1; num <= 9; num++)
//		{
//			printf("%d * %d = %d \n", first_num, num, first_num * num);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int dice1, dice2;
//	for (dice1 = 1; dice1 <= 4; dice1++)
//	{
//		for (dice2 = 1; dice2 <= 6; dice2++)
//		{
//			printf("1번 주사위: %d    2번 주사위: %d \n", dice1, dice2);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		printf("%d번째 내부 반복분 진입 \n", outer);
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("내부 반복문 %d번 반복 \n", inter);
//		}
//		printf("%d번째 내부 반복문 탈출 \n", outer);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < outer + 1; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int outer, inner;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inner = 0; inner < 5; inner++)
//		{
//			if (outer == inner || outer + inner == 4)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter1, inter2;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
 
 
 
 
 
//#include <stdio.h>
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	for (int y=1; y<=LINE; y+=1)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int LINE = 4;
//	scanf("%d", &LINE);
//	int outer, inter;
//	for (outer = LINE; outer >= 0; outer--)
//	{
//		for (inter = 0; inter < outer; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}







//#include <stdio.h>						//선생님이 만드신거
//int main()
//{
//	int LINE=3;
//	scanf("%d", &LINE);
//	int star = 1;
//
//	for (int blank = LINE; blank >= 1;blank--) {
//		for (int x = 1; x <= blank; x++) {
//			printf(" ");
//		}
//		for (int x = 1; x <= star; x++) {
//			printf("*");
//		}
//		printf("\n");
//		
//		star += 2;
//	}
//
//	return 0;
//}




//#include <stdio.h>				//내가 어찌어찌 만든거
//int main()
//{
//	int LINE;
//	scanf("%d", &LINE);
//	int outer, inter1, inter2;
//	for (outer = 0; outer < LINE; outer++)
//	{
//		for (inter1 = 0; inter1 < LINE-outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 3; inter2 < 4+outer*2 ;inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	return 0;
//}





//#include <stdio.h>				문제 3 손실방지
//int main()
//{
//	int LINE;			//LINE = 4
//	scanf("%d", &LINE);
//	int outer, inter1, inter2;
//	for (outer = 0; outer < LINE; outer++)
//	{
//		for (inter1 = 0; inter1 < LINE +2 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 3; inter2 < LINE + outer * 2; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	return 0;
//}


#include <stdio.h>
int main()
{
	int blank, star;
	int y = 2;

	for (blank = 1; blank <= y; blank++)
	{
		printf(" ");


	}
	for (star = 1; star <= 1; star++)
	{
		printf("*");
	}
	printf("\n");




	for (blank = 1; blank <= 1; blank++)
	{
		printf(" ");
	}
	for (star = 1; star <= 3; star++)
	{
		printf("*");
	}
	printf("\n");




	for (blank = 1; blank <= 0; blank++)
	{
		printf(" ");

	}
	for (star = 1; star <= 5; star++)
	{
		printf("*");
	}
	printf("\n");




	for (blank = 1; blank <= 0; blank++)
	{
		printf(" ");

	}
	for (star = 1; star <= 5; star++)
	{
		printf("*");
	}
	printf("\n");




	for (blank = 1; blank <= 1; blank++)
	{
		printf(" ");

	}
	for (star = 1; star <= 3; star++)
	{
		printf("*");
	}
	printf("\n");




	for (blank = 1; blank <= 2; blank++)
	{
		printf(" ");

	}
	for (star = 1; star <= 1; star++)
	{
		printf("*");
	}
	printf("\n");
}