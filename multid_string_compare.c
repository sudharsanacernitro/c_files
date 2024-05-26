#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include <math.h>

#define size 100
#define m 3
#define n 3

void Arise(char new[][3],int x,int y,int x_inc,int y_inc,char arr[])
{
    int i=1;
    int flag=0;
    printf("\n(%d,%d) -> %c",x,y,new[x][y]);
    while(i<3)
    {
         x = x + x_inc;
         y = y + y_inc;       
         if(new[x][y]!=arr[i])
         flag=1;
        if (x>= 0 && x < m && y >= 0 && y < n) 
        {
            printf("\n(%d,%d) -> %c",x,y,new[x][y]);
        }
        i++;

    }
    if(flag)
    printf("\npossiblity failed ");
    printf("\n\n\n");
}


void found(char new[][3],int target,int x, int y, char arr[]) {
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    int x_increment=0,y_increment=0;
    for (int i = 0; i < 8; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];

        if (newX >= 0 && newX < m && newY >= 0 && newY < n) {
            if(new[newX][newY]==target)
            {
            x_increment=newX-x;
            y_increment=newY-y;
            Arise(new,x,y,x_increment,y_increment,arr);
            }
        }
    }
}

int main()
{
    char arr[size],main[100];
    int i=0,j=0,flag=0,sum=-1;
    fgets(main,size,stdin);
    char new[m][n];
   for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    {
        if(main[sum+1]!='\0' )
        {
            new[i][j]=main[++sum];
        }
        else{
            new[i][j]='*';
        }
    }
 
   }
   

for(int i=0;i<m;i++){
for(int j=0;j<n;j++)
{
    if(new[i][j]=='\n')
    new[i][j]='*';
printf("%c ",new[i][j]);
}
printf("\n");}
printf("enter the substring to find in this matrix:");
    fgets(arr,size,stdin);

     char f1=arr[0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(new[i][j]==f1)
            {
             printf("possiblity found from coordinates: %d,%d ",i,j);
             found(new,arr[1],i,j,arr);
            }
        }
    }

}
/*
w e l
c o m
e t o

w c e
e o t
l m o

w e l c
o m e t
o 1 2 3
4 5 6 7
*/