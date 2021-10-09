#pragma once
#include<iostream>
using namespace std;

void hannoi(int n, char A, char B, char C)	//A盘移动到C盘
{
	if (n == 1)
	{
		cout << "移动圆盘编号" << n << " " << A << "->" << C << endl;
	}
	else
	{
		hannoi(n - 1, A, C, B);			//n-1个盘子通过B,C盘由A移动到B
		cout << "移动圆盘编号" << n << " " << A << "->" << C << endl;
		hannoi(n - 1, B, A, C);			//n-1个盘子通过A,B盘有B移动到C
	}
}
