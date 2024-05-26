#include<stdio.h>
#include<string.h>
#define n 1000



int main()
{
    char arr[n];
    fgets(arr,n,stdin);
    printf("%s",arr);
    int i=0,count=0;
   /* while(arr[i]!='\0')
    {
        if(arr[i]=='\n')
        {
            count++;
        }
        i++;
    }
    printf("%d",count);*/
    char *t=strtok(arr,",");
    while(t!=NULL)
    {
        printf("%s\n",t);
        t=strtok(NULL,",");
    }
    
   
}
