// Your code here...
#include<stdio.h>
int main(){
    int N;
    printf("",N);
    scanf("%d",&N);
    int a=1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            int d=a+64;
            char ch=(char)d;
            printf("%c ",ch);
            d++;
        }
        printf("\n");
    }
    return 0;}