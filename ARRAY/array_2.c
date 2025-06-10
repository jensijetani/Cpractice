// write a c program to print all negative elements in array

#include<stdio.h>
int main()
{
  int n,i;
  printf("Enter number of elements: ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements: ");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

  printf("negative elements in array are: ");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
  return 0;
}