#include <stdio.h>

int main(void)
{
    int num;
    int i=1;
    printf("숫자를 입력 하시오: ");
    scanf("%d", &num);

    while(i<=num)
    {
        printf("%d ", i*3);
        i++;
    }
    return 0;


}