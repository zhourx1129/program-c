#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char input[] = {};
	printf("您的电脑将会在一分钟内关机\n");
	printf("如果输入\"我是猪\"则可以取消关机\n");
	system("shutdown -s -t 60");
	while(1){
		scanf("%s",input);
		if(strcmp(input,"我是猪") == 0){
			system("shutdown -a");
			printf("关机已取消\n");
			break;
		}
		else
			printf("输入错误,请重新输入,否则会自动关机\n");
	}	
	return 0;
}