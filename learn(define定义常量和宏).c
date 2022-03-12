#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


////define是一个预处理指令
////1.define 定义符号 定义常量
//
//#define MAX 1000
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}


//2.define 定义宏
#define ADD(X,Y) ((X)+(Y))

int main()
{
	printf("%d\n", 4*ADD(2, 3));
	//4*ADD(X,Y) = 4*2+3 宏是完成替换的 不会智能进行优先计算
	//写代码时将参数用括号包括
	return 0;
}