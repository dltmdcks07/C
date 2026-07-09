//#include <stdio.h>
//void main()
//{
//	int i, k;
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0; k < 2; k++)
//		{
//			printf("중첩 for문입니다.(i값: %d, k값: %d)\n", i, k);
//		}
//	}
//}
//#include <stdio.h>
//void main()
//{
//	int i, k;
//	for (i = 2; i <= 9; i++)
//	{
//		for(k=1; k <= 9; k++)
//		{
//			printf("%d * %d = %d\n", i, k, i * k);
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//void main()
//{
//	int i, k;
//	for (i = 1; i <= 9; i++)
//	{
//		for(k=2; k<= 9; k++)
//		{
//			printf("%2d * %2d = %2d", k, i, k * i);
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//void main()
//{
//	int i, k;
//	for (i = 1, k = 1; i <= 9; i++, k++)
//		printf("%d * %d = %d\n", i, k, i * k);
//}
//#include <stdio.h>
//void main()
//{
//	int i;
//	i = 0;
//	for (;;)
//	{
//		printf("%d \n", i);
//		i++;
//	}
//}
//#include <stdio.h>
//void main()
//{
//	int i;
//	for (i = 0; i = 128; i++)
//	{
//		if(i % 16 == 0)
//		{
//			printf("-------\n");
//			printf("10진수 16진수 문자 \n");
//			printf("-------\n");
//		}
//		printf("%5d %5x %5c \n", i, i, i);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int blank, star;
//	int num1 = 2;
//	for (blank = 1; blank <= num1; blank++)
//	{
//		printf(" ");
//	}
//	printf("*");
//	printf("\n");
//	num1 -= 1;
//	for (blank = 1; blank <= num1; blank++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 3; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (star = 1; star <= 5; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (star = 1; star <= 5; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (blank = 1; blank <= num1; blank++)
//	{
//		printf(" ");
//	}
//	for (star = 1; star <= 3; star++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	num1 += 1;
//	for (blank = 1; blank <= 2; blank++)
//	{
//		printf(" ");
//	}
//	printf("*");
//	printf("\n");
//}






//#include <stdio.h>						//문제3 내가 만든거
//int main()
//{
//	int LINE=3;
//	scanf("%d", &LINE);
//	int star = 1, blank, x;
//
//	for (blank = LINE; blank >= 1;blank--) 
//	{
//		for (x = 1; x <= blank; x++) 
//		{
//			printf(" ");
//		}
//		for (x = 1; x <= star; x++) 
//		{
//			printf("*");
//		}
//		printf("\n");
//		
//		star += 2;
//	}
//
//	star -=2;
//
//	for (blank = LINE; blank >= 1; blank--)
//	{
//		for (x = LINE; x >= blank; x--)
//		{
//			printf(" ");
//		}
//		for (x = 1; x <= star; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		star -= 2;
//	}
//
//	return 0;
//}




//#include <stdio.h>				//문제 3 선생님이 바꾸신것
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	int star = 1, blank, x;
//	int delta = 1;
//	for (blank = LINE; star >= 1;)
//	{
//		for (x = 1; x <= blank; x++)
//		{
//			printf(" ");
//		}
//		for (x = 1; x <= star; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		blank -= 1 * delta;
//		star += 2 * delta;
//
//		if (blank == 0) {
//			delta = -delta;
//			blank -= 1 * delta;
//			star += 2 * delta;
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int LINE=3;
//	scanf("%d", &LINE);
//	int star = 1;
//	int num = 1;
//
//	for (int blank = LINE; blank >= 1;blank--) {
//		for (int x = 1; x <= blank; x++) {
//			printf(" ");
//		}
//		for (int x = 1; x <= star; x++) {
//			printf("%d", num);
//		}
//		num += 1;
//		printf("\n");
//		
//		star += 1;
//	}
//
//	return 0;
//}










//#include <stdio.h>
//int main()
//{
//	int player,input, turn;
//	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
//	for (turn = 1; turn <= 31; turn++)
//	{
//		for (player = 1; player <= 3; player++)
//		{
//			printf("A: ");
//			scanf("%d", &input);
//			turn += 1;
//		}
//		printf("턴이 넘어갑니다.\n");
//		for (player = 1; player <= 3; player++)
//		{
//			printf("B: ");
//			scanf("%d", &input);
//			turn += 1;
//		}
//		printf("턴이 넘어갑니다.\n");
//		for (player = 1; player <= 3; player++)
//		{
//			printf("A: ");
//			scanf("%d", &input);
//			turn += 1;
//		}
//		printf("턴이 넘어갑니다.\n");
//	}
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
//}


//#include <stdio.h>					//베스킨라빈스 31 만들기
//int main()
//{
//	int limit=0, input, turn=1;
//	int player = 0;
//	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
//	for (;;)
//	{
//
//		for (limit = 1; limit <= 3; limit++)
//		{
//			printf("%c: ",'A'+player);
//			scanf("%d", &input);
//			if (limit == 1 && input == 0)
//			{
//				printf("턴을 넘기기 위해선 하나 이상의 수를 말해야합니다.\n");
//				limit -= 1;
//				continue;
//			}
//			if (limit >= 2)
//			{
//				if (input == 0)
//				{
//					break;
//				}
//			}
//			if (input != turn)
//			{
//				printf("잘못된 입력입니다.\n");
//				printf("지금 입력해야하는 값은 %d 입니다.\n",turn);
//				limit -= 1;
//				continue;
//			}
//			turn += 1;
//			if (input == 31)
//			{
//				break;
//			}
//		}
//		if (input == 31)
//		{
//			break;
//		}
//		printf("턴이 넘어갑니다.\n");
//		player++;
//		player %= 2;
//	}
//	printf("%c가 졌습니다.", 'A' + player);
//}





#include <stdio.h>
int main()
{
	int limit = 0, input, turn = 1;
	int player = 0;
	printf("게임을 시작합니다! : 뒤에 숫자를 입력해주세요.\n");
	for (;;)
	{

		for (limit = 1; limit <= 3; limit++)
		{
			
			printf("%c: ", 'A' + player);
			scanf("%d", &input);
			if (limit > 0)
			{
				if(limit == 1 && input == 0)
				{
					printf("턴을 넘기기 위해선 하나 이상의 수를 말해야합니다.\n");
					limit -= 1;
					continue;
				}
			}
			if (limit == 1 && input == 0)
			{
				printf("턴을 넘기기 위해선 하나 이상의 수를 말해야합니다.\n");
				limit -= 1;
				continue;
			}
			if (limit >= 2)
			{
				if (input == 0)
				{
					break;
				}

			}
			if (input != turn)
			{
				printf("잘못된 입력입니다.\n");
				printf("지금 입력해야하는 값은 %d 입니다.\n", turn);
				limit -= 1;
				continue;
			}
			turn += 1;
			if (input == 31)
			{
				break;
			}
		}
		if (input == 31)
		{
			break;
		}
		printf("턴이 넘어갑니다.\n");
		player++;
		player %= 2;
	}
	printf("%c가 졌습니다.", 'A' + player);
}