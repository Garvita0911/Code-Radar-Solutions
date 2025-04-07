// Your code here...
#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x=='A'){
        printf("Excellent");
    }
    if(x=='B'){
        printf("Good");
    }
    if(x=='C'){
        printf("Average");
    }
    if(x=='D'){
        printf("Below Average");
    }
    if(x=='F'){
        printf("Failt");
    }
    else{
        printf("Invalid");
    }
    return 0;
    }