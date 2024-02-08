#include <stdio.h>
#include <stdlib.h>
long dec_to_bi(int decimal)
{
    if (decimal > 0) {
        dec_to_bi(decimal / 2);
        printf("%d", decimal % 2);
    }

}

int main()
{
    int dec = 17;

    if(dec == 0)
    {
        printf("0");
    }else{
        dec_to_bi(dec);
    }
    return 0;
}
