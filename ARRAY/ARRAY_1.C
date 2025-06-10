//write a c program to read and print elements of array.

#include<stdio.h>
int main()
{
  int arr[10];
  for(int i = 0; i < 10; i++)
    printf("arr[%d] = %d\n", i, arr[i]);
  return 0;
}