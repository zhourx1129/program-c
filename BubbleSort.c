#include<stdio.h>
   
void BubbleSort(int li[],int n){
    int tem,i,j;
    for(i=0;i<n-1;i++) { 
        for(j=0;j<n-1-i;j++){
            if(li[j] > li[j+1]){
                tem = li[j];
                li[j] = li[j+1];
                li[j+1] = tem;
            } 
        }
    }
}
int main(){
    int li[9] = {9,5,3,7,6,8,1,2,4};
    // int n = sizeof(li) / sizeof(int);
    BubbleSort(li,9);
    for(int i=0;i<9;i++)
        printf("%d",li[i]);
}
