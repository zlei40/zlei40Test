#include "common.h"
#include <iostream>
#include <ctime>


using namespace std;
int commonFunction::InitArray(int arr[], int len)
{
	srand((int)time(0));
	for (int i = 0; i < len; i++)
	{
		arr[i] = rand() % 100;
	}
	return 0;
}

int commonFunction::PrintOriginalData(int arr[], int len)
{
	cout << "原始数据:" << "\t";
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	return 0;
}

int commonFunction::PrintOrderData(int arr[], int len)
{
	cout << "排序数据:" << "\t";
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	return 0;
}