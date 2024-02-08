#include <stdio.h>

#define arrSIZE 5

int main()
{
	int arr[arrSIZE];
	
    for(int i=0;i<arrSIZE;i++)
    {
        scanf("%d",&arr[i]);
    }
    
     for(int i=0;i<arrSIZE;i++)
    {
        printf("%d\n",arr[i]);
    }
    

	return 0;
}
