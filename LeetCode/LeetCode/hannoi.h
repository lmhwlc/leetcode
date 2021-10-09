#pragma once
#include<iostream>
using namespace std;

void hannoi(int n, char A, char B, char C)	//A���ƶ���C��
{
	if (n == 1)
	{
		cout << "�ƶ�Բ�̱��" << n << " " << A << "->" << C << endl;
	}
	else
	{
		hannoi(n - 1, A, C, B);			//n-1������ͨ��B,C����A�ƶ���B
		cout << "�ƶ�Բ�̱��" << n << " " << A << "->" << C << endl;
		hannoi(n - 1, B, A, C);			//n-1������ͨ��A,B����B�ƶ���C
	}
}
