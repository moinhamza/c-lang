#include <stdio.h>

int main(){
    int a,b;
    
    printf("enter the value of a :");
    scanf("%d", &a);
    
    printf("enter tge value of b : ");
    scanf("%d", &b);
    
    if(a>b){
        printf("\na is greater\n");
    }
    else{
        printf("\nb is greater\n");
    }
    
    printf("\nthe value of a is %d\n", a);
    printf("the value of b ia %d\n", b);
    return 0;
}