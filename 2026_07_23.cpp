//#include <stdio.h>
//void main()
//{
//	char ss[5] = "abcd";
//	char tt[5];
//	int i;
//	for(i=0; i<4; i++)
//	{
//		tt[i] = ss[3-i];
//	}
//	tt[4] = '\0';
//	printf("거꾸로 출력한 결과==>%s\n", tt);
//}

//#include <string.h>
//#include <stdio.h>
//void main()
//{
//	char ss[] = "XYZ";
//	int len;
//	len = strlen(ss);
//	printf("문자열\"%s\"의 길이 ==> $d\n", ss, len);
//}

//#include <string.h>
//#include <stdio.h>
//void main()
//{
//	char ss[4];
//	strcpy(ss, "XYZ");
//	printf("문자열ss의 내용 ==> %s\n", ss);
//}

//#include <string.h>
//#include <stdio.h>
//void main()
//{
//	char ss[7] = "XYZ";
//	strcat(ss, "ABC");
//	printf("이어진 문자열ss의 내용 ==> %s\n", ss);
//}

//#include <string.h>
//#include <stdio.h>
//void main()
//{
//	char ss[] = "XYZ";
//	char tt[] = "XYZ";
//	int r;
//	r = strcmp(ss, tt);
//	printf("문자열의 비교 결과 ==> %d\n", r);
//}






//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string input = "14";
//	int total = 0;
//	printf("%d\n", input[0] - '0');
//	total = 16 * (input[0]- '0');
//	total += (input[1] - '0');
//	printf("%d \n", total);
//}




//#include <iostream>			//내가 만든거
//#include <string>
//using namespace std;
//void main()
//{
//	string input;
//	int total = 0;
//	cout << "16진수 입력: ";
//	cin >> input;
//	for (int i = 0; i<input.length(); i++)
//	{
//		total *= 16;
//		if (input[i] >= '0' && input[i] <= '9')
//		{
//			total += (input[i] - '0');
//		}
//		else if (input[i] >= 'A' && input[i] <= 'F')
//		{
//			total += (input[i] - 'A' + 10);
//		}
//		else if (input[i] >= 'a' && input[i] <= 'f')
//		{
//			total += (input[i] - 'a' + 10);
//		}
//	}
//	cout << "10진수 값: " << total << endl;
//
//	//int ch;
//	//scanf("%x", &ch);
//	//printf("%d", ch);
//}




//#include <iostream>			//보통 이렇게 만든다
//#include <string>
//using namespace std;
//void main()
//{
//	string input;
//	int total = 0;
//	cout << "16진수 입력: ";
//	cin >> input;
//
//	int hexa = 1;
//	for (int i = input.length() - 1; i >= 0; i--)
//	{
//		int num;
//		if (input[i] >= '0' && input[i] <= '9')
//		{
//			num = (input[i] - '0');
//		}
//		else if (input[i] >= 'A' && input[i] <= 'F')
//		{
//			num = (input[i] - 'A' + 10);
//		}
//		else if (input[i] >= 'a' && input[i] <= 'f')
//		{
//			num = (input[i] - 'a' + 10);
//		}
//
//		total += num * hexa;
//		hexa *= 16;
//	}
//}


//#include <iostream>
//using namespace std;
//void main()
//{
//	int num = 100;
//	int* pNum = &num;
//	cout << "num = " << num << endl;
//	cout << "&num = " << &num << endl;
//	cout << "*pNum = " << *pNum << endl;
//	cout << "pNum = " << pNum << endl;
//}

//#include <iostream>
//using namespace std;
//void main()
//{
//	int value = 50;
//	int* ptr = &value;
//	cout << "변경 전 value: " << value << endl;
//	*ptr = 100;
//	cout << "변경 후 value: " << value << endl;
//}

//#include <stdio.h>
//void main()
//{
//	char a = 'A';
//	char* pA = &a;
//	int b = 100;
//	int* pB = &b;
//	double c = 3.14;
//	double* pC = &c;
//
//	printf("pA의 크기 : %d byte\n", sizeof(pA));
//	printf("pB의 크기 : %d byte\n", sizeof(pB));
//	printf("pC의 크기 : %d byte\n", sizeof(pC));
//
//	printf("pA의 크기 : %d byte\n", sizeof(*pA));
//	printf("pB의 크기 : %d byte\n", sizeof(*pB));
//	printf("pC의 크기 : %d byte\n", sizeof(*pC));
//}

//#include <stdio.h>
//void main()
//{
//	int* numptr;
//	int num1 = 10;
//	int num2 = 20;
//
//	numptr = &num1;
//	printf("%d\n", *numptr);
//
//	numptr = &num2;
//	printf("%d\n", *numptr);
//}

//#include <stdio.h>
//void main()
//{
//	int arr[5] = { 2,4,6,8,10 };
//	int* p = &arr[0];
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//}

//#include <stdio.h>
//void main()
//{
//	char str[] = "programming";
//	char* ptr1, * ptr2;
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//	printf("두 포인터 간의 차는 %d입니다\n", ptr2 - ptr1);
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1 + 1));
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n", *(ptr1 + 3));
//}

//#include <stdio.h>
//int main()
//{
//	int fibonacci[5] = { 3,5,8,13,21 };
//	int* ptrFibo;
//	ptrFibo = fibonacci;
//	int* ptrFibo1 = &fibonacci[1];
//	int* ptrFibo4 = fibonacci + 4;
//	printf("%d의 위치 - %d의 위치", *ptrFibo4, *ptrFibo1);
//	printf(">> %d\n", ptrFibo4 - ptrFibo1);
//	printf("%d", ptrFibo[1]);
//	printf("%d", ptrFibo[0]);
//	printf("%d", ptrFibo[-1]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[5] = { 3,6,9,12,15 };
//	int* ptr = &arr[0];
//	ptr += 2;
//	printf("%d\n", *ptr);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number[2] = { 1,2 };
//	void* p = number;
//	printf("%d\n", *(int*)p);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int num[4] = { 1,2,3,4 };
//	int* pt = num;
//	pt++;
//	*pt++ = 5;
//	*pt++ = 10;
//	pt--;
//	*pt++ += 20;
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//void main()
//{
//	char str[] = "도구는 사람을 증폭시킨다. AI도 도구다.";
//	char* ptr = &str[3];
//	printf("%s\n\n", str);
//	printf("%s\n\n", ptr);
//	str[15] = 'a';
//	str[23] = 'b';
//	str[25] = 'c';
//	printf("%s\n\n", str);
//}

#include <stdio.h>
void main()
{
	int numArr[5] = { 11,22,33,44,55 };
	int* numptrA = &numArr[2];
	void* ptr = numArr;
	printf("%d\n",*(numptrA-1) );
	printf("%d\n",*((int*)ptr+4) );
}