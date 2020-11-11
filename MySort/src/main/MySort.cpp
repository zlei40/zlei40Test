#include "MySort.h"
#include <iostream>
#include <list>


//冒泡排序
int MySort::BubbleSort(int arr[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
		CoutLog(arr, len, i,"BubbleSort");
	}
	return 0;
}


//插入排序
int  MySort::InsertSort(int arr[], int len)
{
	int curNumber = 0;
	for (int i = 0; i < len; i++)
	{
		curNumber = arr[i];
		int j = i;

		while ((j > 0) && (curNumber < arr[j - 1]))
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = curNumber;
		CoutLog(arr, len, i,"InsertSort");
	}

	return 0;
}
//选择排序
int  MySort::SelectSort(int arr[], int len)
{
	int index = 0;
	for (int i = 0; i < len; i++)
	{
		index = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[index] > arr[j])
			{
				index = j;
			}
		}
		int tmp = 0;
		tmp = arr[i];
		arr[i] = arr[index];
		arr[index] = tmp;

		CoutLog(arr, len, i,"SelectSort");
	}

	return 0;
}

//希尔排序
int MySort::ShellSort(int arr[], int len)
{
	for (int gap = len / 2; gap > 0; gap = gap / 2)
	{
		for (int i = gap; i < len; i++)
		{
			int j = 1;
			int curNumber = arr[i];
			while ((i - j * gap >= 0 ) && (arr[i]< arr[i - j * gap]))
			{
				arr[i] = arr[i - j * gap];
				j++;
			}
			arr[i - (j - 1) * gap] = curNumber;
		}

		CoutLog(arr, len, gap,"ShellSort");
	}


	
	return 0;
}

//归并排序
int  MySort::MergeSort(int arr[], int len)
{
	Merge(arr,0, len -1);
	return 0;
}

//快速排序
int  MySort::QuickSort(int arr[], int len)
{




	Quick(arr, 0, len - 1);
	return 0;
}

//堆排序
int  MySort::HeapSort(int arr[], int len)
{
	return 0;
}

//计数排序
int  MySort::CountingSort(int arr[], int len)
{
	int iMin = arr[0];
	int iMax = arr[0];
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > iMax)
		{
			iMax = arr[i];
		}
		else if (arr[i] < iMin)
		{
			iMin = arr[i];
		}
	}
	int iLong = iMax - iMin + 1;
	int *tmpArr = new int[iLong]();
	for (int i = 0; i < len; i++)
	{
		tmpArr[arr[i] - iMin] += 1;
	}

	int curIndex = 0;
	for (int i=0;i<iLong;i++)
	{
		while (tmpArr[i] != 0)
		{
			arr[curIndex] = i + iMin;
			tmpArr[i] -= 1;
			curIndex++;
		}
	}

	return 0;
}

//桶排序
int  MySort::BucketSort(int arr[], int len)
{
	return 0;
}
//基数排序
int  MySort::RadixSort(int arr[], int len)
{
	int iMin = arr[0];
	int iMax = arr[0];
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > iMax)
		{
			iMax = arr[i];
		}
	}
	int dev = 1;
	int tmpArr[10] = {0};
	int *newArr = new int[len];

	for (int i = 0; i < len; i++)
	{
		tmpArr[arr[i] % 10] += 1 ;
	}
	int icount = 0;
	for (int i = 1; i < 10; i++)
	{
		tmpArr[i] += tmpArr[i-1];
	}
	for (int i = 9; i > 0; i--)
	{
		tmpArr[i] = tmpArr[i - 1];
	}
	tmpArr[0] = 0;
	for (int i = 0; i < len; i++)
	{
		int itt = tmpArr[arr[i] % 10];
		newArr[tmpArr[arr[i] % 10]] = arr[i];
		tmpArr[arr[i] % 10] += 1;
	}

	return 0;
}


int  MySort::Merge(int arr[], int iStart,int iEnd)
{

	if (iStart < iEnd)
	{
		int iSplit = (iStart + iEnd) / 2;

		Merge(arr, iStart, iSplit);
		Merge(arr, iSplit+1, iEnd);
		SecondMerge(arr, iStart, iEnd,iSplit);
	}


	return 0;
}


int MySort::SecondMerge(int Arr[], int iStart, int iEnd,int mid)
{
	int leftLen = mid - iStart + 1;
	int rightLen = iEnd - mid;
	int *arrLeft = new int[leftLen]();
	int *arrRight = new int[rightLen]();
	for (int i = 0; i < leftLen; i++)
	{
		arrLeft[i] = Arr[iStart + i];
	}
	for (int i = 0; i < rightLen; i++)
	{
		arrRight[i] = Arr[mid + i + 1];
	}
	int arrIndex = iStart;
	int j = 0;
	for (int i = 0; i < leftLen; i++)
	{
		while((j< rightLen)&&(arrLeft[i] > arrRight[j]))
		{
			Arr[arrIndex] = arrRight[j];
			j++;
			arrIndex++;
		}
		Arr[arrIndex] = arrLeft[i];
		arrIndex++;
	}

	cout << "下标" << iStart << "-下标" << iEnd << "\t";
	for (int k = 0; k < 10; k++)
	{
		cout << Arr[k] << "\t";
	}
	cout << endl;

	return 0;
}



int MySort::Quick(int arr[], int iStart, int iEnd)
{
	if (iStart < iEnd)
	{
		int iTmp = arr[iStart];
		int ileft = iStart;
		int iright = iEnd;
		int iCurrent = iStart;
		for (; iright > 0; iright--)
		{
			if (ileft == iright)
			{
				arr[iCurrent] = iTmp;
				break;
			}
			if (arr[iright] < iTmp)//如果从右往左找到比iTmp小的数，放到前面去
			{
				arr[iCurrent] = arr[iright];
				iCurrent = iright;
				//cout << "从右到左：" << "\t";
				//for (int k = 0; k < 10; k++)
				//{
				//	cout << arr[k] << "\t";
				//}
				//cout << endl;
				//cout << "left===" << ileft << "\t" << "right===" << iright << "\t" << "current===" << iCurrent << endl;
				for (; ileft < iright; ileft++)
				{
					if (arr[ileft] > iTmp)
					{
						arr[iCurrent] = arr[ileft];
						iCurrent = ileft;
						//cout << "从左到右："<< "\t";
						//for (int k = 0; k < 10; k++)
						//{
						//	cout << arr[k] << "\t";
						//}
						//cout << endl;
						//cout << "left===" << ileft << "\t" << "right===" << iright << "\t" << "current===" << iCurrent << endl;
						break;
					}
				}
			}
			if (ileft == iright)
			{
				arr[iCurrent] = iTmp;
				break;
			}
		}
		Quick(arr, iStart, iCurrent);
		if(iCurrent<iEnd)
			Quick(arr, iCurrent+1, iEnd);
	}
	return 0;
}























void MySort::CoutLog(int arr[], int len,  int number,string strSortType)
{
	if ((strSortType == "BubbleSort") || (strSortType == "InsertSort") || (strSortType == "SelectSort"))
	{
		cout << "第" << number + 1 << "次排序:" << "\t";
	}
	else if (strSortType == "ShellSort")
	{
		cout << "间隔为" << number << "的排序:" << "\t";
	}
	for (int k = 0; k < len; k++)
	{
		cout << arr[k] << "\t";
	}
	cout << endl;
}