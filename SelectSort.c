#include<stdio.h>

int main(){
	int arr[9] = {9,5,3,7,6,8,1,2,4};
	int i,j,sz;
	sz = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<sz-1;i++){
		int tmp;
		for(j=i+1;j<sz;j++){
			if(arr[j] < arr[i]){
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
	for(i=0;i<sz;i++)
		printf("%d",arr[i]);
	printf("\n");
	return 0;
}
