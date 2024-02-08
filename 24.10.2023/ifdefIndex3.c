#include <stdio.h>
#include <stdlib.h>

#define DEBUG

void Sort(int *arr,int arrlen)
{
  int sorted = 0;
  int temp;
    for(int i = 1;(i < arrlen - 1) && !sorted; i++)
    {
	sorted = 1;
	for(int j = 0;j<arrlen - i - 1;j++)
	{
		if(arr[j] > arr[j+1])
		{
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
			sorted = 0;
		}
	}
}
}

int sumIndex3(int *arr,int arrlen)
{
    int sum = 0;
    for(int j = 0; j < arrlen;j++)
    {
        if(j%3==0 && j != 0)
        {
            sum = sum + arr[j];
        }
    }
    return sum;
}

int main()
{
    int arr[10] = {12,2,5,7,34,6,9,8,101,404};
    Sort(arr,10);
    int sum = sumIndex3(arr,10);
    printf("the sum is %d", sum);
    #ifdef DEBUG
    for(int i = 0; i < 10; i++)
    {
        printf("\n%d", arr[i]);
        if(i % 3 ==0 && i != 0) printf("  3 index");
    }
    #endif
    return 0;
}
