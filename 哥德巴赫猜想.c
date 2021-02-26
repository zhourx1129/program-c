#include<stdio.h>
#include<math.h>

int func (int num){
    int i;
    for(i=2;i<num;i++){
        if(num % i == 0)
            // break;
            return 0;
    }
    if(i == num)
        return 1;
    
}

int main(){
    int num,num1,num2;
    printf("请输入一个大于6的偶数");
    scanf("%d",&num);
    for (num1 = 2; num1 <= num/2; num1++){
        num2 = num - num1;
        if(func(num1) && func(num2))
            printf("%d %d\n",num1,num2);
    }
    return 0;
}
