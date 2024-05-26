#include<stdio.h>
int fb(int,int,int n);
int main()
{
 fb(0,1,10);
}

int fb(int s,int f,int n)
{
    if(n>0){
    printf("%d ",s);
    fb(f,s+f,n-1);
    }
return 1;
}