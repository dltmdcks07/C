//#include <stdio.h>
//int main()
//{
//	float conversion = 0;
//	while (conversion < 2)
//	{
//		printf("%.1f\n", conversion);
//		conversion = conversion + 0.1;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	for (double conversion = 90;
//		conversion > 0.1; conversion /= 3)
//	{
//		if (conversion == 10.0)
//		{
//			continue;
//		}
//		printf("%.3lf\n", conversion);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int number;
//	while (1)
//	{
//		scanf("%d", &number);
//		if (number == 0)
//		{
//			printf("프로그램 종료\n");
//			break;
//		}
//	} 
//}
 
 
 
 
 
 
//#include <stdio.h>
//int main()
//{
//	for (float conversion = 0; conversion < 2; conversion += 0.1)
//	{
//		printf("%.1f\n", conversion);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double conversion = 90.0;
//	while(conversion > 0.1)
//	{
//		if (conversion == 10.0)
//		{
//			conversion /= 3;
//			continue;
//		}
//		printf("%.3lf\n", conversion);
//		conversion /= 3;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	for (;;)
//	{
//		scanf("%d", &number);
//		if (number == 0)
//		{
//			printf("프로그램 종료\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int for_flag = 1;	//1
//	int number = 0;		//2
//	while (for_flag)	//3, 8, 17
//	{
//		printf("number = %d\n", number);	//4, 9
//		while (number++)					//5, 10
//		{
//			printf(">number = %d\n", number);	//11
//			if (number == 3)					//12
//			{
//				for_flag = 0;					//13
//				break;							//14
//			}
//		}
//		number++;							//6, 15
//		printf(">>number = %d\n", number);	//7, 16
//	}
//	printf("%d %d\n", for_flag, number);	//18
//	return 0;								//19             0 2 2 3 4 (0 4)
//}

//#include <stdio.h>
//int main()
//{
//	int for_flag = 1;			//1
//	int number = 0;				//2
//	for (;for_flag;)			//3, 8, 17
//	{
//		printf("number = %d\n", number);	//4, 9
//		for (; number++; )					//5, 10
//		{
//			printf(" > number = %d\n", number);		//11
//			if (number == 3)						//12
//			{
//				for_flag = 0;						//13
//				break;								//14
//			}
//		}
//		number++;									//6, 15
//		printf(">>number = %d\n",number);			//7, 16
//	}
//	printf("%d %d\n", for_flag, number);			//18
//	return 0;										//19
//}




//#include <iostream>				//이해 안됨
//void main()
//{
//	int number, count;
//	std::cin >> number >> count;
//	std::cout << "new : " <<number<<  "" << count << std::endl;
//}

//#include <iostream>
//using namespace std;
//void main()
//{
//	int number, count;
//	cin >> number >> count;
//	cout << "new: " << number << " " << count << endl;
//}

//#include <iostream>
//#include <bitset>
//using namespace std;
//void main()
//{
//	char a = 77;
//	char b = 8;
//	cout << bitset<8>(a) << "->" << (int)a << endl;
//	cout << bitset<8>(b) << "->" << (int)b << endl;
//
//	cout << "AND: " << bitset<8>(a & b) << endl;
//	cout << "OR : " << bitset<8>(a | b) << endl;
//	cout << "XOR : " << bitset<8>(a ^ b) << endl;
//	cout << "NOT : " << bitset<8>(~a) << endl;
//	cout << "&> ^: " << bitset<8>(a ^ a & b) << endl;
//}
//#include <iostream>
//#include <bitset>
//using namespace std;
//void main()
//{
//	char a = -1;
//	char b = a >> 5;
//	char c = 127 >> 1;
//	printf("%x (%d)\n", a, a);
//	printf("%x (%d)\n", a, b);
//	printf("%x %x\n\n", 127, c);
//	char d = 1 << 1;
//	char e = 1 << 4;
//	char f = 1 << 7;
//	printf("%x (%d)\n", d, d);
//	printf("%x (%d)\n", e, e);
//	printf("%x (%d)\n", f, f);
//}
//#include <stdio.h>
//int main()
//{
//	char arr[4];
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char alpha[4] = { 'a','b','c','d' };
//	printf("%c%c%c%c\n", alpha[0], alpha[1], alpha[2], alpha[3]);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	printf("num의 안에 들어있는");
//	printf("1번째 숫자는? %d\n", num[1]);
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int num[3] = { 3,6,9 };
//	cout << "num의 안에 들어있는 " << "1 번째 숫자는? " << num[1] << endl;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	printf("%d번째에 %d저장\n",0, num[0]);
//	printf("%d번째에 %d저장\n",1, num[1]);
//	printf("%d번째에 %d저장\n",2, num[2]);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	int k = 0;
//	printf("%d번째에 %d저장\n", k, num[k]);
//	k++;
//	printf("%d번째에 %d저장\n", k, num[k]);
//	k++;
//	printf("%d번째에 %d저장\n", k, num[k]);
//	k++;
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num[3] = { 3,6,9 };
//	for (int k = 0; k < 3; k++)
//	{
//		printf(" % d번째에 % d저장\n", k, num[k]);
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> arr[i];
//		cout << arr[i] << endl;
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int num[5];
//	cout << "임의의 숫자 5개 입력: ";
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> num[i];
//	}
//	cout << "\n\n";
//	for (int i = 0; i < 5; i++)
//	{
//		
//		cout << num[i] << ' ';
//	}
//
//	return 0;
//}
#include <iostream>
using namespace std;
int main()
{
	int num[10];
	cout << "숫자 10개 입력: ";
	for (int i = 0; i < 10; i++)
	{
			cin >> num[i];
	}
	int input;
	cin >> input;
}