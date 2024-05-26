#include<stdio.h>
#include<math.h>
#define size 10


int main()
{
int arr[3][3];
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    scanf("%d",&arr[i][j]);
}
int max=0;
int x,y,c=0;
x=0;y=0;
printf("\n");
for(int i=0;i<3;i++){
     max=arr[i][0];
    
    for(int j=1;j<3;j++)
    {
     if(arr[i][j]>max && c!=j )
     {
        max=arr[i][j];
        x=j;
     }
    }
    c=x;
    printf("%d ",max);
    
}


}