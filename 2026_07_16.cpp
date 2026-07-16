//#include <stdio.h>
//void main()
//{
//	printf("10&7 = %d\n", 10 & 7);
//	printf("123&456 = %d\n", 123 & 456);
//	printf("0xFFFF&0000 = %d\n", 0xFFFF & 0000);
//}

//#include <stdio.h>
//void main()
//{
//	printf("10|7 = %d\n", 10 | 7);
//	printf("123|456 = %d\n", 123 | 456);
//	printf("0xFFFF|0000 = %d\n", 0xFFFF | 0000);
//}

//#include <stdio.h>
//void main()
//{
//	printf("10^7 = %d\n", 10 ^ 7);
//	printf("123^456 = %d\n", 123 ^ 456);
//	printf("0xFFFF^0000 = %d\n", 0xFFFF ^ 0000);
//}

//#include <stdio.h>
//void main()
//{
//	char a = 'A', b, c;
//	char mask = 0x0F;
//	printf("%X & %X = %X\n", a, mask, a & mask);
//	printf("%X | %X = %X\n", a, mask, a | mask);
//	mask = 'a' - 'A';
//	b = a ^ mask;
//	printf("%c^%d = %c\n", a, mask, b);
//	a = b ^ mask;
//	printf("%c^%d = %c\n", b, mask, a);
//}

//#include <stdio.h>
//void main()
//{
//	int a = 12345;
//	printf("%d\n", ~a + 1);
//}

//#include <stdio.h>
//void main()
//{
//	int a = 100, result;
//	int i;
//	for (i = 0; i <= 5; i++)
//	{
//		result = a << i;
//		printf("%d << %d = %d\n", a, i, result);
//	}
//	for (i = 0; i <= 5; i++)
//	{
//		result = a >> i;
//		printf("%d >> %d = %d\n", a, i, result);
//	}
//}

//#include <iostream>           //문제 3 1차
//using namespace std;
//int main()
//{
//	int num[10];
//	int Input;
//	cout << "숫자 10개 입력: ";
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> num[i];
//	}
//	cin >> Input;
//	if Input == num;
//	{
//		cout << "exist" << endl;
//	}
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{//1 2 1 2 1 2 1 2 1 2
//    int num[10];
//    int Input;
//    bool found = false;
//    cout << "숫자 10개 입력: ";
//    for (int i = 0; i < 10; i++)
//    {
//        cin >> num[i];
//    }
//    while (!found)
//    {
//
//        cout << "숫자 하나 입력: ";
//        cin >> Input;
//        for (int i = 0; i < 10; i++)
//        {
//            if (num[i] == Input)
//            {
//                found = true;
//                break;
//            }
//        }
//    }
//    cout << "exist" << endl;
//}

//#include <iostream>
//using namespace std;
//void main()
//{
//	int one, two;
//	int max = 0;
//	cin >> one >> two;
//	if (one > two)
//		max = one;
//	else
//		max = two;
//	cout << "max= " << max << endl;
//}
//#include <iostream>
//using namespace std;
//void main()
//{
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//	if (one > two)
//	{
//		if (one > three)
//			max = one;
//		else
//			max = three;
//	}
//	else
//	{
//		if (two > three)
//			max = two;
//		else
//			max = three;
//	}
//	cout << "max= " <<max << endl;
//}
//#include <iostream>
//using namespace std;
//void main()
//{
//	int a[3] = { 1,3,2 };
//	int max = a[0];
//	for (int i = 1; i < 3; i++)
//	{
//		if (max < a[i])
//			max = a[i];
//	}
//	cout << "max= " << max << endl;
//}



//#include <iostream>
//using namespace std;
//void main()
//{
//
//}


//#include <iostream>
//using namespace std;
//void main()
//{
//	int a[5] = { 1, 3, 6, 4, 2 };
//	int max = a[0], min = a[0];
//	int total = a[0];
//	float average;
//	for (int i = 1; i < 5; i++)
//	{
//		if (max < a[i])
//			max = a[i];
//		if (min > a[i])
//			min = a[i];
//		total += a[i];
//	}
//	average = total /5.0;
//	cout << "최댓값: " << max << endl;
//	cout << "최솟값: " << min << endl;
//	cout << "총합: " << total << endl;
//	cout << "평균: " << average << endl;
//	//printf("평균: %.1f", average);
//}

//#include <iostream>
//using namespace std;
//void main()
//{
//	int a[10] = {1,1,4,5,6,2,3,3,4,1};
//	int array[7] = {  };//0,1-6
//	for (int i = 0; i < 10; i++)
//	{
//		array[a[i]] += 1;
//	}
//	for (int i = 1; i <= 6; i++)
//	{
//		cout << i << "가 나온 횟수: " << array[i]<< endl;
//	}
//}

//#include <iostream>
//using namespace std;
//void main()
//{
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	cout << "left = " << left << ", ";
//	cout << "right = " << right << endl;
//}
//#include <iostream>
//using namespace std;
//void main()
//{
//	int left = 3, right = 5;
//	int temp;
//	temp = left;
//	left = right;
//	right = temp;
//	cout << "left = " << left << ", ";
//	cout << "right = " << right << endl;
//}
//#include <iostream>
//using namespace std;
//void main()
//{
//	int num[2] = { 10,3 };
//	int temp;
//	temp = num[0];
//	num[0] = num[1];
//	num[1] = temp;
//	cout << "num[0]= " << num[0] << ", ";
//	cout << "num[1]= " << num[1] << endl;
//}
//#include <iostream>
//using namespace std;
//void main()
//{
//	int a[4] = { 4,3,1,2 };
//	int temp;
//	temp = a[0]; //temp=4
//	a[0] = a[2]; //a[0]=1
//	a[2] = a[1]; //a[2]=3
//	a[1] = a[3];
//	a[3] = temp;
//
//	cout << a[0] << endl;
//	cout << a[1] << endl; 
//	cout << a[2] << endl; 
//	cout << a[3] << endl; 
//}

//#include <iostream>
//using namespace std;
//void main()
//{
//
//}

//#include <iostream>
//using namespace std;
//void main()
//{
//	int a[4] = { 4,3,1,2 };
//	int temp;
//
//	temp = a[0];	//temp =4
//	a[0] = a[2];	//a[0]=1
//	a[2] = temp;	//a[2]=4	{1,3,4,2}
//
//	temp = a[1];	//temp = 3
//	a[1] = a[3];	//a[1] = 2
//	a[3] = temp;	//a[3] = 3	{1,2,4,3}
//
//	temp = a[2];	//temp = 4
//	a[2] = a[3];	//a[2] = 3
//	a[3] = temp;	//a[3] = 4
//
//	for (int i = 0; i < 4; i++)
//	{
//		cout << a[i] << endl;
//	}
//}

//#include <iostream>		//답과 내가 억지로 만든거..
//using namespace std;
//void main()
//{
//	int i = 0,temp;
//	int array[4];
//	int turn = 0;
//	cout << "숫자 4개 입력: ";
//	for (i=0; i < 4; i++)
//	{
//		cin >> array[i];
//
//	}
//
//	
//	for (int k = 3; k >= 1; k--) {
//		for (i = 0; i < k; i++) {
//			if (array[i] > array[i + 1])
//			{
//				temp = array[i];
//				array[i] = array[i + 1];
//				array[i + 1] = temp;
//			}
//		}
//	}
//
//	
//
//
//
//
//	//for(i=0;i<3;i++)		//내가 억지로 만든거
//	//{
//	//	if (turn == 5)
//	//	{
//	//		i = 4;
//	//		break;
//	//	}
//	//	if (array[i] > array[i + 1])
//	//	{
//	//		temp = array[i];
//	//		array[i] = array[i + 1];
//	//		array[i + 1] = temp;
//	//	}
//	//	if (i == 2)
//	//	{
//	//		i = -1;
//	//		turn++;
//	//	}
//
//	//
//	//}						//여기까지
//	for (i = 0; i < 4; i++)
//	{
//		cout << array[i] << " ";
//	}
//}