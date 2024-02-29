#include <stdio.h>

int dulj(char * str){
    int len = 0;
    for(char * phr = str; *phr != '\0'; phr++){
        len++;
    }
    return len;

}
int main(){
    char arr[] = "Miki";

    int len = dulj(arr);

    printf("len:%d", len);
    

    return 0;
}