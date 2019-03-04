#include <stdio.h>
#include <stdlib.h>

int add(int a,int b){return a+b;}
int minus(int a,int b){return a-b;}
int divi(int a,int b){return a/b;}
int multi(int a,int b){return a*b;}
int (*FunPtr[4])(int a,int b)={add,minus,divi,multi};
int main(){
    int option,a,b,result;
    
    printf("Enter function number you want\n");
    printf("You should enter case 0~3");
    scanf("%d %d %d",&a,&b,&option);
    
    if((option>=0)&&(option<=3))
    {
        result=(*FunPtr[option])(a,b);
    }    
    printf("a=%d , b=%d , result=%d",a,b,result);
    return 0;
}
