#include <stdio.h>
#include "fun.h"

int main()
{
    int Sum,Date;

    printf("Enter sum and date:");
    scanf("%d %d", &Sum, &Date);
	
	solution(Sum,Date);        
    return 0;
}