#include<stdio.h>

int main(){
	int li[] = {1,2,3,4,5,6,7,8,9};
	int search = 0;
	int len = sizeof(li) / sizeof(li[0]);
	int right = len-1;
	int left = 0;
	printf("������Ҫ���ҵ���\n");
	scanf("%d",&search);
	
	while(left <= right){
		int mid = (left + right) / 2;
		if(li[mid] < search)
			left = mid+1;
		else if(li[mid] > search)
			right = mid-1;
		else {
			printf("�ҵ���,�±�Ϊ%d\n",mid);
			break;
		}
			
	}
	if(left > right)
		printf("û�ҵ�\n");
}