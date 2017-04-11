#include <stdio.h>
#include "fun.h"
void solution(int sum, int date)
{
if (date<=365 && sum>=10000 && sum<=100000){
        if (date>0 && date<=30){
        sum = sum - sum * 0.10;
        }
        if (date>30 && date<=120){
        sum = sum + sum * 0.02;
        }
        if (date>120 && date<=240){
        sum = sum+sum*0.06;
        }
        if (date>240 && date<=365){
        sum = sum+sum*0.12;
        }
    }
    else{
         printf("Error!");
         }

      if (date<=365 && sum>=100000){
        if (date>0 && date<=30){
        sum = sum-sum*0.10;
        }
        if (date>30 && date<=120){
        sum = sum+sum*0.03;
        }
        if (date>120 && date<=240){
        sum = sum+sum*0.08;
        }
        if (date>240 && date<=365){
        sum = sum+sum*0.15;
        }
      }
    else{
         printf("Error");
         }
    printf("Sum: %d\n", sum);
}