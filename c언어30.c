#include <stdio.h>

int main(void)
{
    int num;
    int i=0;
    printf("몇번을 반복을 하실겁니까?: ");
    scanf("%d", &num);

    while(i<num)
    {
        printf("hello world \n");
        i++;
    }
    return 0;

    
    
     

}