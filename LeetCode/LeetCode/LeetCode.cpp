// LeetCode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
using namespace std;
int main()
{
	/*
		sizeof 计算的是数组所在内存的大小，和它里面的元素无关
		ch1的内存大小是 6字节,5个字符加一个结束符‘\0’，支符号串的长度是5
		ch2计算的是指针的大小，指针大小为 4字节，指向的字符串长度为5
		ch3的内存大小是 10字节，字符串长度为5
	*/
	char ch1[] = "abcde";			
	const char *ch2 = "abcde";
	char ch3[10] = "abcde";
	cout << sizeof(ch1) << " " << strlen(ch1) << endl;
	cout << sizeof(ch2) << " " << strlen(ch2) << endl;
	cout << sizeof(ch3) << " " << strlen(ch3) << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
