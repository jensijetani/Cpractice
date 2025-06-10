//write a c program to find count total number of even and odd elements

#include<stdio.h>
int main()
{
  int n,i;
  int evencount=0,oddcount=0;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
    if(arr[i]%2==0)
        evencount++;
    else
        oddcount++;
    printf("The number of even elements is %d",evencount);
    printf("The number of odd elements is %d",oddcount);
    return 0;
}