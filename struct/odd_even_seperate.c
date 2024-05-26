#include<stdio.h>
#define size 12

int main(){
    int temp,i,j;
int a[size]={1,2,3,4,5,6,7,8,9,98,78,7};
i=0;
j=size-1;
while(i<j)
{
   while(i < j &&a[i]%2==0)i++;
   while(i < j &&a[j]%2!=0)j--;
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;

}
printf("%d %d",i,j);
for(int i=0;i<size;i++)
{
    printf("%d ",a[i]);
}
}
