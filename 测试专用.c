#include<stdio.h>

int main(){
	int c=1;
	int a = (++c)+(++c)+(++c);
	printf("%d  %d\n",a,c);
}