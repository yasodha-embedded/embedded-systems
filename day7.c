#include<stdio.h>
void add(int a,int b,int *result){
    *result=a+b;
    printf("addition of a%d and b%d is %d\n",a,b,*result);
}
void sub(int a,int b,int *result){
    *result=a-b;
    printf("subtraction of a%d and b%d is %d\n",a,b,*result);
}
void multiply(int a,int b,int *result){
    *result=a*b;
    printf("multiplication of a%d and b%d is %d\n",a,b,*result);
}
void divide(int a,int b,int *result){
    if(b==0){
        printf("undefined.\n");
    }
    else{
    *result=a/b;
    printf("division of a%d and b%d is %d\n",a,b,*result);
    }
}
int main(){
    int a=0;
    int b=0;
    int result=0;
    char op;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter op:");
    scanf(" %c",&op);
     if(op=='+'){
        add(a, b, &result);
    }
    else if(op=='-'){
        sub(a, b, &result);
    }
    else if(op=='*'){
        multiply(a, b, &result);
    }
    else if(op=='/'){
        divide(a, b, &result);
    }
    else{
        printf("invalid op\n");
    }
    
    return 0;

}