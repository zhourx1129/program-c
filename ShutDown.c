#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char input[] = {};
	printf("���ĵ��Խ�����һ�����ڹػ�\n");
	printf("�������\"������\"�����ȡ���ػ�\n");
	system("shutdown -s -t 60");
	while(1){
		scanf("%s",input);
		if(strcmp(input,"������") == 0){
			system("shutdown -a");
			printf("�ػ���ȡ��\n");
			break;
		}
		else
			printf("�������,����������,������Զ��ػ�\n");
	}	
	return 0;
}