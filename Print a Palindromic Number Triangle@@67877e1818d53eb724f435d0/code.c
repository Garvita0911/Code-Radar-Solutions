// Your code here...
#include<stdio.h>
int main(){
    int N;
    printf("",N);
    scanf("%d",&N);
    int a=1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);

        }
    
        for(int m=1;m<=i;m++){
            printf("%d",a);
            a--;
        printf("\n");
        }

    return 0;  }
    