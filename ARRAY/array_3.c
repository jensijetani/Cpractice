//write a c program to find sum of all elements

#include<stdio.h>
int main()
{
  int n,i,arr[10],sum=0;
  printf("Enter the number of elements: ");

  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  for(i=0;i<n;i++)
    sum+=arr[i];
  printf("Sum of elements in array are: %d",sum);
  return 0;
}