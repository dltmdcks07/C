//#include <stdio.h>
//#include <malloc.h>
//void main()
//{
//	int* p;
//	int i, hap = 0;
//	int cnt;
//	printf("입력할 개수는? ");
//	scanf("%d", &cnt);
//	p = (int*)malloc(sizeof(int) * cnt);
//	for(i = 0; i < cnt; i++)
//	{
//		printf("%d번째 숫자: ", i + 1);
//		scanf("%d", p+i);
//	}
//	for(i=0; i < cnt; i++)
//	{
//		hap += *(p+i);
//	}
//	printf("입력 숫자 합 ==> %d\n", hap);
//	free(p);
//}


//#include <stdio.h>
//#include <malloc.h>
//void main()
//{
//	int* p, * s;
//	int i, j;
//	printf("malloc() 함수 사용\n");
//	p = (int*)malloc(sizeof(int) * 3);
//	for(i=0; i < 3; i++)
//		printf("할당된 곳의 초깃값 p[%d]==> %d\n ", i,p[i]);
//	free(p);
//	printf("\ncalloc() 함수 사용\n");
//	s = (int*)calloc(sizeof(int),3);
//	for(j=0; j < 3; j++)
//		printf("할당된 곳의 초깃값 s[%d]==> %d\n ", j, s[j]);
//	free(s);
//}


//#include <stdio.h>
//#include <malloc.h>
//void main()
//{
//	int* p;
//	int i, hap = 0;
//	int cnt = 0;
//	int data;
//	p = (int*)malloc(sizeof(int) * 1);
//	printf("1 번째 숫자: ");
//	scanf("%d", &p[0]);
//	cnt++;
//	for (i = 2;; i++)
//	{
//		printf("%d 번째 숫자: ", i);
//		scanf("%d", &data);
//		if (data != 0)
//			p = (int*)realloc(p, sizeof(int) * i);
//		else
//			break;
//		p[i - 1] = data;
//		cnt++;
//	}
//	for (i = 0; i < cnt; i++)
//	{
//		hap += p[i];
//	}
//	printf("입력 숫자 합 ==> %d\n", hap);
//	free(p);
//}



//#include <iostream>
//using namespace std;
//void main()
//{
//	int* buff;
//	buff = new int[2];
//	cin >> buff[0] >> buff[1];
//	cout << "new: " << buff[0] << " " << buff[1] << endl;
//	delete buff;
//}
//#include <iostream>
//using namespace std;
//void main()
//{
//	int n;
//	cin >> n;
//	int* buff = new int[n];
//	for (int i = 0; i < n; i++)
//		cin >> buff[i];
//	for (int i = 0; i < n; i++)
//		cout << buff[i] << " ";
//	delete buff;
//}
//#include <iostream>
//#include <ctime>
//using namespace std;
//void main()
//{
//	srand((unsigned int)time(NULL));
//	int n;
//	cin >> n;
//	int* buff = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		buff[i] = rand() % 5 + 5;
//	}
//	cout << "new: ";
//	for (int i = 0; i < n; i++)
//	{
//		cout << buff[i] << " ";
//	}
//	cout << endl;
//	delete buff;
//}
//#include <iostream>
//#include <ctime>
//using namespace std;
//void main()
//{
//	srand((unsigned int)time(NULL));
//	int n, i;
//	cin >> n;
//	int* student = new int[n];
//	for (i = 0; i < n; i++)
//	{
//		student[i] = rand() % 101;
//	}
//	char array[6]="ABCDE";
//	int grade;
//	for (i = 0; i < n; i++)
//	{
//		int data = (student[i]+1) / 20;
//		grade = 4-data;
//		if (4 - data < 0)
//		{
//			grade = 0;
//		}
//		//if (student[i] >= 80)
//		//{
//		//	grade = 0;
//		//}
//		//else if (student[i] >= 60)
//		//{
//		//	grade = 1;
//		//}
//		//else if (student[i] >= 40)
//		//{
//		//	grade = 2;
//		//}
//		//else if (student[i] >= 20)
//		//{
//		//	grade = 3;
//		//}
//		//else
//		//{
//		//	grade = 4;
//		//}
//		cout << i + 1 << "번째 학생(" << student[i] << ") - " << array[grade] << endl;
//	}
//	delete student;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string s(10, '_');
//	cout << s << endl;
//	cout << s.length() << endl;
//	cout << s.empty() << endl;
//	s.clear();
//	cout << s.empty() << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string s = "Hello, ISam!";
//	cout << s.substr(7, 5) << endl;
//	s.append(" :)");
//	s += "\n hi";
//	cout << s << endl;
//	s.insert(5, "??");
//	cout << s << endl;
//	printf("%s", s.c_str());
//}
//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string s = "Hello!";
//	cout << s[0] << endl;
//	cout << s.at(1) << endl;
//	cout << s.front() << endl;;
//	cout << s.back() << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string s = "example string";
//	char search = 'e';
//	int at = s.find(search, 0);
//	cout << "'e' is at" << at << " " << endl;
//	cout << s.rfind("e") << endl;
//	if (s.find("xyz") == string::npos)
//		cout << "없음" << endl;
//}


//#include <iostream>
//using namespace std;
//void main()
//{
//	int a = 0;
//	string i;
//	cout << "문자열을 입력: ";
//	cin >> i;
//	a = i.length()-1;
//	for (; a >= 0; a--)
//	{
//		cout << i[a];
//	}
//}

//#include <iostream>
//using namespace std;
//void main()
//{
//	string input;
//	string search;   //=0
//	cout << "문자열을 입력: ";
//	cin >> input;
//	for (;;)
//	{
//		cout << "검색할 문자: ";
//		cin >> search;
//		if (search == "escape")
//		{
//			cout << "탈출~";
//			break;
//		}
//
//		size_t idx = input.find(search);
//		if (idx == string::npos)
//		{
//			cout << "없습니다. 다시 입력해주세요." << endl;
//			continue;
//		}
//		cout << idx + 1 << "번째에 있습니다!" << endl << endl;
//	}
//}

//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string s;
//	cin >> s;
//	cout << s.substr(7, 5) << endl;
//	cout << s << endl;
//	s.insert(5, "??");
//	cout << s << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string s = "Hello, World!";
//	s.replace(7, 5, "C++");
//	cout << s << endl;
//	cout << s << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string s = "apple";
//	cout << s.compare("apple") << endl;
//	cout << s.compare("banana") << endl;
//	cout << s.compare("aaa") << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string s = "42";
//	int n = stoi(s);
//	double d = stod("3.14");
//	string t = to_string(n * 2);
//	cout << n << " " << d << " " << endl;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string s = "apple, banana, cherry";
//	string delim = ",";
//	size_t pos = 0;
//	while ((pos = s.find(delim)) != string::npos)
//	{
//		cout << s.substr(0, pos) << " ";
//		s.erase(0, pos + delim.length());
//	}
//}
//#include <iostream>
//#include <string>
//using namespace std;
//void main()
//{
//	string A = "This is a sample string";
//	A.replace(10, 6, "useful");
//	cout << A << endl;
//}
#include <iostream>
#include <string>
using namespace std;
void main()
{
	string input="1";
	int total = 0;
	cout << "16진수 입력: ";
	//cin >> input;
}