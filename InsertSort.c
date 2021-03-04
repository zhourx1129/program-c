#include<stdio.h>
int main()
{
	int arr[13] = {9,5,3,7,6,8,1,3,6,8,1,2,4};
	int i,j,tmp,sz;
	int k;
	sz = sizeof(arr)/sizeof(arr[0]);
	for (i=1;i<sz;i++){
		for (j=i;j>0;j--){
			if(arr[j]<arr[j-1]){
				tmp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (i=0;i<sz;i++)
		printf("%d",arr[i]);
	printf("\n");
}