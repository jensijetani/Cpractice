//write a c program to find maximum and minimum elements in array

#include<stdio.h>
int main()
{
  int arr[5],i,n,min,max;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  printf("Enter the elements: ");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    min=arr[0];
    max=arr[0];
    for(i=0;i<n;i++)
        if(arr[i]<min)
            min=arr[i];
    for(i=0;i<n;i++)
        if(arr[i]>max)
            max=arr[i];
    printf("Minimum element is: %d",min);
    printf("Maximum element is: %d",max);
    return 0;
}