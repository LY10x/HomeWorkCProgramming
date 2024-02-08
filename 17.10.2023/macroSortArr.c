#include <stdio.h>
#include <stdlib.h>

#define SWAP(A, B, TYPE) { \
    TYPE temp = A; \
    A = B; \
    B = temp; \
} 

#define SORT(ARRAY,SIZE,TYPE,COMPARE) {\
int sorted = 0; \
for(int i = 0;(i < SIZE - 1) && !sorted; i++)\
{\
	sorted = 1;\
	for(int j = 0;j<SIZE - i - 1;j++)\
	{\
		if(ARRAY[j] COMPARE ARRAY[j+1])\
		{\
			SWAP(ARRAY[j],ARRAY[j+1],TYPE);\
            sorted = 0; \
		}\
	}\
}\
}

int main()
{
    int arr[10] = {10,9,15,2,98,3,4,1,123,57};
    SORT(arr,10,int,>);
    for(int i=0; i<10; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
