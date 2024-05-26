#include<stdio.h>
int search(int,int [],int,int);
int main()
{
    int arr[5]={1,2,3,4,5};
    int found=-1;
    found=search(1,arr,0,4);
    if(found!=-1)
    {
    printf("Element found at :%d",found);
    return 0;
    }
    
    printf("Not found");
   
}

int search(int target,int arr[],int low,int high)
{
    int mid=low+(high-low)/2;

    if(high<=low)
    return -1;

    if(target==arr[mid])
    return mid; 
     
    else if(target>arr[mid])
    search(target,arr,mid+1,high);

    else if(target<arr[mid])
    search(target,arr,low,mid-1);

    
    
}