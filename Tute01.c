/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1,m2,avg;
  printf("Input first subject marks : ");
  scanf("%d",&m1);
  printf("Input second subject marks : ");
  scanf("%d",&m2);
  avg=(m1+m2)/2;
  printf("Average of the two marks : %d",avg);
  
  return 0;
}

