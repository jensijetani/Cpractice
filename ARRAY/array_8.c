//write a c program to copy all elements from an array to another array

#include<stdio.h>
int main()
{
    int arr1[10]={1,2,3,4,5,6,7,8,9};
    int arr2[10];
    for(int i=0;i<10;i++)
        arr2[i]=arr1[i];
    for(int i=0;i<10;i++)
        printf("%d",arr2[i]);
    return 0;
}