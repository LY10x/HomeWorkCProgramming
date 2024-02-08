#include <stdio.h>
#include <stdlib.h>



int main()
{
    int arr[10] = {12,2,5,7,34,6,9,8,101,404};
    int arrlen = 10;
#ifdef _WIN32
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
#elif LINUX
     int i, j, min_idx;
 
    for (i = 0; i < arrlen-1; i++)
    {
    
        min_idx = i;
        for (j = i+1; j < arrlen; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
 
           if(min_idx != i)
           {
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
           }
    }

#elif APPLE
    int i, key, j;
    for (i = 1; i < arrlen; i++) {
        key = arr[i];
        j = i - 1;
 
       
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
#else
 int temp;
 for(int i = 0; i<arrlen/2; i++){
        temp = arr[i];
        arr[i] = arr[arrlen-i-1];
        arr[arrlen-i-1] = temp;
    }
#endif
    for(int i = 0;i < arrlen;i++)
    {
        printf("\n%d", arr[i]);
    }
    return 0;
}