#include<stdio.h>

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int j;
	int i=0;
	// printf("&i=%d &arr=%d &j=%d\n",&i,arr,&j);
	for(i=0;i<=10;i++){
		printf("hehe\n");
		arr[i]=0;
	}
	// printf("%d",&arr[10]);
	return 0;
}
