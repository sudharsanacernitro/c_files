#include<stdio.h>
#define n 8


int rec(int arr[],int i,int j)
{
    if(j>=n-i)
    {
        return 1;
    }
    int temp=i;
    printf("[");
    while(temp<n-j)
    {
        printf("%d",arr[temp++]);
        if(temp!=n-j)
        printf(",");
    }
    printf("]\n");
    rec(arr,i,j+1);

}

int main()
{
    int arr[n]={22,11,6,8,12,34,56,78};
    for(int i=0;i<n;i++)
   {
    rec(arr,i,0);
        
    }
   
}
