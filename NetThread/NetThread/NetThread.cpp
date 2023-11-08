// NetThread.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "CLOG.h"

int main()
{
    //std::cout << "Hello World!\n";
    char str[] = "Hello World";
    int i = 666;
    shuchu("A ha, check me: %s %d", str,i);

    printf("当前代码的行数：%d\n", __LINE__);

    printf("当前源文件的文件名：%s\n", __FILE__);

    printf("当前源文件的编译日期:%s\n", __DATE__);

    printf("当前源文件的编译时间：%s\n", __TIME__);

    printf("当前源文件的编译的具体时间：%s\n", __TIMESTAMP__);
    system("pause");
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
