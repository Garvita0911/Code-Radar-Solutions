// Your code here...
#include<stdio.h>
int main(){
    int N;
    printf("",N);
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        int a=1;
        for(int j=1;j<=(N+1)-i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;}