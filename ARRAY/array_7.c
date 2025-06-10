//write a c program to count total number of negative elements in array

#include<stdio.h>
int main()
{
  int n,i,count=0;
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
    if(a[i]<0)
      count++;
  printf("total number of negative elements: %d\n",count);
  return 0;
}