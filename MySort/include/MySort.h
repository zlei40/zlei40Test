#pragma once
#include <string>
using namespace std;
//排序算法

//冒泡排序
/*比较相邻的元素。如果第一个比第二个大，就交换它们两个；
对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对，这样在最后的元素应该会是最大的数；
针对所有的元素重复以上的步骤，除了最后一个；
重复步骤1~3，直到排序完成。*/

//选择排序
/*初始状态：无序区为R[1..n]，有序区为空；
第i趟排序(i = 1, 2, 3…n - 1)开始时，当前有序区和无序区分别为R[1..i - 1]和R(i..n）。该趟排序从当前无序区中 - 选出关键字最小的记录 R[k]，将它与无序区的第1个记录R交换，使R[1..i]和R[i + 1..n)分别变为记录个数增加1个的新有序区和记录个数减少1个的新无序区；
n - 1趟结束，数组有序化了。*/

//插入排序
/*从第一个元素开始，该元素可以认为已经被排序；
取出下一个元素，在已经排序的元素序列中从后向前扫描；
如果该元素（已排序）大于新元素，将该元素移到下一位置；
重复步骤3，直到找到已排序的元素小于或者等于新元素的位置；
将新元素插入到该位置后；
重复步骤2~5。*/

//希尔排序
/*选择一个增量序列t1，t2，…，tk，其中ti > tj，tk = 1；
按增量序列个数k，对序列进行k 趟排序；
每趟排序，根据对应的增量ti，将待排序列分割成若干长度为m 的子序列，分别对各子表进行直接插入排序。仅增量因子为1 时，整个序列作为一个表来处理，表长度即为整个序列的长度。*/

//归并排序
/*把长度为n的输入序列分成两个长度为n/2的子序列；
对这两个子序列分别采用归并排序；
将两个排序好的子序列合并成一个最终的排序序列。*/


//计数排序
/*找出待排序的数组中最大和最小的元素；
统计数组中每个值为i的元素出现的次数，存入数组C的第i项；
对所有的计数累加（从C中的第一个元素开始，每一项和前一项相加）；
反向填充目标数组：将每个元素i放在新数组的第C(i)项，每放一个元素就将C(i)减去1。*/

class MySort
{
public:
	int BubbleSort(int arr[], int len);//冒泡排序
	int BucketSort(int arr[], int len);//桶排序
	int CountingSort(int arr[], int len);//计数排序
	int HeapSort(int arr[], int len);//堆排序
	int InsertSort(int arr[], int len);//插入排序
	int MergeSort(int arr[], int len);//归并排序
	int QuickSort(int arr[], int len);//快速排序
	int RadixSort(int arr[], int len);//基数排序
	int SelectSort(int arr[], int len);//选择排序
	int ShellSort(int arr[], int len);//希尔排序

private:
	void CoutLog(int arr[], int len,int number,string strSortType);
	int Merge(int Arr[], int iStart,int iEnd);
	int SecondMerge(int Arr[], int iStart, int iEnd, int mid);


	int Quick(int Arr[], int iStart, int iEnd);

};

