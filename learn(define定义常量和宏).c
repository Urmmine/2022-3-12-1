#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


////define��һ��Ԥ����ָ��
////1.define ������� ���峣��
//
//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}


//2.define �����
#define ADD(X,Y) ((X)+(Y))

int main()
{
	printf("%d\n", 4*ADD(2, 3));
	//4*ADD(X,Y) = 4*2+3 ��������滻�� �������ܽ������ȼ���
	//д����ʱ�����������Ű���
	return 0;
}