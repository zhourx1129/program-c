#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void StartMenu(){
    printf("****************************\n");
    printf("******1��start  0��end******\n");
    printf("****************************\n");
}

int StartGames(){
    int res=rand()%100+1;
    int guess;
	char con;
    while (1)
    {
        printf("�²�����Ϊ>:\n");
        scanf("%d",&guess);
        if (guess > res)
            printf("�´���\n");
        else if(guess < res)
            printf("��С��\n");
        else{
            printf("��ϲ��¶���\n");
			printf("�Ƿ����?(Y/N)\n");
			scanf("%s",&con);
			if(con == 'Y')
				break;
			else{
				printf("��Ϸ����");
				return 0;
			} 
        }
    }
}

int main(){
    int select;
    srand(time(NULL));
    do
    {
        StartMenu();
        printf("��ѡ��>:\n");
        scanf("%d",&select);
        if (select == 1)
            select = StartGames();
        else if(select == 0){
            printf("��Ϸ����\n");
            break;
        } 
		else{
			printf("��������,����������\n");
		}
			
    } while (select);
}