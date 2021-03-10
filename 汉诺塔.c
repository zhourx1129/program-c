#include<stdio.h>

void move(char A,char C){
    printf("%c-->%c  ",A,C);
}

void hannuo(int num,char A,char B,char C){
    if(num==1){
        move(A,C);
    }else{
        hannuo(num-1,A,C,B);
        move(A,C);
        hannuo(num-1,B,A,C);
    }
}

int main(){
    int n;
    printf("请输入一个数");
    scanf("%d",&n);
    hannuo(n,'A','B','C');
}