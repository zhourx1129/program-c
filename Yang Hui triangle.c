
#include<stdio.h>
int main(){
    int i,j,arr[90][90],k,n;
    printf("ÇëÊäÈëĞĞÊı");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<=i;j++){
            if(j==i || j==0) arr[i][j] = 1;
			else arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    for(i=0;i<n;i++){
        for(k=0;k<(n-i);k++)
            printf("   ");
        for(j=0;j<=i;j++){
            printf("%6d",arr[i][j]);
        }
        printf("\n");
    }
}

/*
#include<stdio.h>
int main(){
    int i,j,a[10][10];
    for(i=0;i<=9;i++)
    for(j=0;j<=9;j++){
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for(i=2;i<=9;i++)
        for(j=1;j<=i-1;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    for(i=0;i<=9;i++){
        for(j=0;j<=i;j++)
            printf("%5d",a[i][j]);
        printf("\n");
    }
}
*/