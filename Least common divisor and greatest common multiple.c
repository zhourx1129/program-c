#include<stdio.h>
int main(){
	int num1,num2,pro,tem;
	printf("please input two numbers \n");
	scanf("%d%d",&num1,&num2);
	pro = num1 * num2;
	while(num2 != 0){
		tem = num1 % num2;
		num1 = num2;
		num2 = tem;
	}
	printf("���Լ����%d\n",num1);
	printf("��С��������%d\n",pro/num1);
}