#include<stdio.h>

int quickSort(int arr[],int left,int right){
	int tmp = arr[left];
	while (left < right){
		while(left < right && arr[right] >= tmp){
			right --;
		}
		arr[left] = arr[right];
		while(left < right && arr[left] <= tmp){
			left ++;		
		}
		arr[right] = arr[left];
	}
	arr[left] = tmp;
	return left;
}

int QuickSort(int arr[],int left,int right){
	if(left < right){
		int mid = quickSort(arr,left,right);
		QuickSort(arr,left,mid-1);
		QuickSort(arr,mid+1,right);
	}
}

int main(){
	int arr[9] = {9,5,3,7,6,8,1,2,4} , i;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0,right = sz-1;
	QuickSort(arr,left,right);
	for(i=0;i<sz;i++)
		printf("%d",arr[i]);
	printf("\n");
}