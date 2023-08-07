#include <stdio.h>

int main(void)
{
    int start, end;
    int sum;

    printf("시작 숫자와 끝 숫자를 입력하시오: ");
    scanf("%d %d", &start, &end);

    for(sum=0; start<=end; start++)
        sum+=start;

    printf("합계: %d \n", sum);
    return 0;
}