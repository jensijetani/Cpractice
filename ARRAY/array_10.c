//write a c program to delete an element from an array at specified position

#include<stdio.h>
int main()
{
     int n,i=0,arr[]={10,20,30,40,50,60};

     printf("which position are you delete:");
     scanf("%d",&n);

     for(i=n-1;i<5;i++)
       {
           arr[i] = arr[i+1];
       }

    for(i=0;i<5;i++) {
        printf("%d ",arr[i]);
    }
        return 0;
}