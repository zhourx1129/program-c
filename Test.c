#include<stdio.h>

int main()
{
	// 死循环    数组下标越界误认为是i
	/*
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i=0;
	printf("&i=%d &arr=%d",&i,arr);
	for(i=0;i<=11;i++){
		printf("hehe\n");
		arr[i]=0;
	}
	*/

	// i是无符号数,无符号数最小也是0 所以一直满足i>=0,即为死循环
	/*
	unsigned int i;
	for(i=9;i>=0;i--){
		printf("%u\n",i);
	}
	*/

	// ungigned char 无符号字符型，范围为0~255 恒成立，所以死循环
	/*
	unsigned char i = 0;
	for(i = 0; i <= 255; i++)
		printf("helloworld\n");
	*/
}










