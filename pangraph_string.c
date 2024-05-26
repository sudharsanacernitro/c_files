#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define size 200

int main()
{
    char arr[size];
    fgets(arr,size,stdin);
    int int_arr[26];
    for(int i=0;i<26;i++)
    {
        int_arr[i]=i+1;
    }

    for(int i=0;i<strlen(arr)-1;i++)
    {
        int temp=tolower(arr[i])-'a';
        int_arr[temp]=-1;
    }

    int k=strlen(arr)-1;
    printf("%d\n",k);
    int s=0;
    for(int i=0;i<26;i++)
    {
        if(int_arr[i]!=-1)
        {
            arr[k+s]=(char)int_arr[i]+'a'-1;
            s++;
        }
    }
arr[k+s]='\0';

    printf("%s",arr);
}