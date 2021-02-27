#include<stdio.h>

int InsertSort_(int arr[],int gap,int len)
{
    int preindex,current,i,j;
    for (i=0;i<len;i++){
        preindex = i-gap;
        current = arr[i];
    while (preindex >= 0 && arr[preindex] > current)
    {
        arr[preindex+gap] = arr[preindex];
        preindex -= gap;
    }
    arr[preindex+gap] = current;
    }
    return 0;
}


int ShellSort(int arr[],int sz)
{
    int gap = sz / 2;
    while (gap)
    {
        InsertSort_(arr,gap,sz);
        gap /= 2;
    }
    return 0;
}

int main()
{
	int i,arr[] = {6,5,3,7,9,23,6,8,1,2,4};
    int sz = sizeof(arr) / sizeof(arr[0]);
    ShellSort(arr,sz);
    for(i=0;i<sz;i++)
        printf("%d ",arr[i]);
    printf("\n");
}