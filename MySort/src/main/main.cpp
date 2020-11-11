// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "MySort.h"
#include "common.h"

using namespace std;






int main()
{
    std::cout << "Hello World!\n";


	int len = 10;
	int arr[10] = {};
	MySort testSort;
	commonFunction cf;

	//冒泡排序
	cout << "-------------------------------冒泡排序--------------------------------" << endl;
	cf.InitArray(arr, len);
	cf.PrintOriginalData(arr, len);
	testSort.BubbleSort(arr, len);
	cf.PrintOrderData(arr, len);
	cout << "--------------------------------冒泡排序--------------------------------" << endl << endl;

	//插入排序
	cout << "--------------------------------插入排序--------------------------------" << endl;
	cf.InitArray(arr, len);
	cf.PrintOriginalData(arr, len);
	testSort.InsertSort(arr, len);
	cf.PrintOrderData(arr, len);
	cout << "--------------------------------插入排序--------------------------------" << endl << endl;

	//选择排序
	cout << "--------------------------------选择排序--------------------------------" << endl;
	cf.InitArray(arr, len);
	cf.PrintOriginalData(arr, len);
	testSort.SelectSort(arr, len);
	cf.PrintOrderData(arr, len);
	cout << "--------------------------------选择排序--------------------------------" << endl << endl;

	//希尔排序
	cout << "--------------------------------希尔排序--------------------------------" << endl;
	cf.InitArray(arr, len);
	cf.PrintOriginalData(arr, len);
	testSort.ShellSort(arr, len);
	cf.PrintOrderData(arr, len);
	cout << "--------------------------------希尔排序--------------------------------" << endl << endl;

	//归并排序
	cout << "--------------------------------归并排序--------------------------------" << endl;
	cf.InitArray(arr, len);
	cf.PrintOriginalData(arr, len);
	testSort.MergeSort(arr, len);
	cf.PrintOrderData(arr, len);
	cout << "--------------------------------归并排序--------------------------------" << endl << endl;

	//快速排序
	cout << "--------------------------------快速排序--------------------------------" << endl;
	cf.InitArray(arr, len);
	cf.PrintOriginalData(arr, len);
	testSort.QuickSort(arr, len);
	cf.PrintOrderData(arr, len);
	cout << "--------------------------------快速排序--------------------------------" << endl << endl;
	
	//计数排序
	cout << "--------------------------------计数排序--------------------------------" << endl;
	cf.InitArray(arr, len);
	cf.PrintOriginalData(arr, len);
	testSort.CountingSort(arr, len);
	cf.PrintOrderData(arr, len);
	cout << "--------------------------------计数排序--------------------------------" << endl << endl;

	//基数排序
	cout << "--------------------------------基数排序--------------------------------" << endl;
	cf.InitArray(arr, len);
	cf.PrintOriginalData(arr, len);
	testSort.RadixSort(arr, len);
	cf.PrintOrderData(arr, len);
	cout << "--------------------------------基数排序--------------------------------" << endl << endl;
	return 0;
	 
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
