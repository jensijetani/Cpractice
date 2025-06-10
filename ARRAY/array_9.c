//write a c program to insert an element in an array

#include<stdio.h>
int main()
{
    int n,val,arr[]={1,2,3,4,5,6,7,8,9,10};
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    scanf("%d",&val);
    arr[n-1]=val;
    for(int i=n-0;i<10;i++)
      printf("%d",arr[i]);
    return 0;

}