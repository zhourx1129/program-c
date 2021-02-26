#include<stdio.h>

int main()
{
	// 死循环    数组下标越界误认为是i
	/*
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i=0;
	printf("&i=%d &arr=%d &j=%d\n",&i,arr,&j);
	for(i=0;i<=11;i++){
		printf("hehe\n");
		arr[i]=0;
	}
	*/

	i是无符号数,无符号数最小也是0 所以一直满足i>=0,即为死循环
	/*
	unsigned int i;
	for(i=9;i>=0;i--){
		printf("%u\n",i);
	}
	*?
	return 0;
}
