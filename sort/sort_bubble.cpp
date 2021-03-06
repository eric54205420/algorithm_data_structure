#include <iostream>
#include <algorithm>
#include <time.h>
#include <stdio.h>
using namespace std;

void bubble_sort(int arr[], int length);

int main(void)
{
	const int N = 10;
	int left = 0;
	int right = 100;
	int arr[N];

	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		int tmp = rand() % (right - left) + left;
		arr[i] = tmp;
	}

	bubble_sort(arr, N);
	
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}

/**
 * @brief: bubble sort
 * @param [in] arr:sorted array
 *		  [in] length:the length of arr
 * @return void
*/
void bubble_sort(int arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
		}
	}
}
