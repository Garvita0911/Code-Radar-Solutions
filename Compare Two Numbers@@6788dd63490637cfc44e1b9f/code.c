// Your code here...
#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(x<y){
        printf("Second");
    }
    else if(x>y){
        printf("First");
    }
    else{
        printf("Equal");
    }
    
    return 0;
    }