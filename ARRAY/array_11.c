//write a c program to  count frequency of each element in an array
#include <stdio.h>
#include <stdbool.h>
int main()
{
  int Arr[]={5,6,8,9,9,3,2,2,5,3};
  int vArr[10];
  int fArr[10];
  int index=0;
  bool flag=false;
  int cnt=0;
  for(int i=0;i<10;i++)
    {
    flag=false;
    cnt=0;
    for(int j=0;j<index;j++)
      {
      if(Arr[i]==vArr[i])
        {
        flag=true;
        break;
        }
      }
      if(flag==false)
        {
        for(int j=i;j<10;j++)
          {
          if(Arr[i]==vArr[i])
            cnt++;
          }
          vArr[index]=Arr[i];
          fArr[index]=cnt;
          index++;
        }
    }
    for(int i=0;i<index;i++)
      printf("%d - %d times\n",vArr[i],fArr[i]);
    return 0;
}