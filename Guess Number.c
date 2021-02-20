#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void StartMenu(){
    printf("****************************\n");
    printf("******1、start  0、end******\n");
    printf("****************************\n");
}

int StartGames(){
    int res=rand()%100+1;
    int guess;
	char con;
    while (1)
    {
        printf("猜测数字为>:\n");
        scanf("%d",&guess);
        if (guess > res)
            printf("猜大了\n");
        else if(guess < res)
            printf("猜小了\n");
        else{
            printf("恭喜你猜对了\n");
			printf("是否继续?(Y/N)\n");
			scanf("%s",&con);
			if(con == 'Y')
				break;
			else{
				printf("游戏结束");
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
        printf("请选择>:\n");
        scanf("%d",&select);
        if (select == 1)
            select = StartGames();
        else if(select == 0){
            printf("游戏结束\n");
            break;
        } 
		else{
			printf("输入有误,请重新输入\n");
		}
			
    } while (select);
}