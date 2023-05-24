#include <stdio.h>

int factorial(int x);
int x;
int evenNumberSum(int bottom,int top);
int bottom,top,sum=0;

int main(){

    printf("\nEnter a positive number to calculate factorial:");
    scanf("%d",&x);
    if(x<0)
        printf("You should have entered a positive number!!!");       
    else 
        printf("%d! = %d\n",x,factorial(x));

    printf("\n\n");

    printf("Enter bottom and top values for summution of even numbers between them:");
    scanf("%d%d",&bottom,&top);
    printf("Sum of even numbers in %d to %d = %d\n",bottom,top,evenNumberSum(bottom,top));

    return 0;
}
int factorial(int x){
    if(x>0)
        return x*factorial(x-1);
    else if (x==0)
        return 1;
}

int evenNumberSum(int bottom,int top){
    if(bottom>top)
        return 0;
    else if(bottom%2!=0)
        return evenNumberSum(bottom+1,top);
    else    
        return bottom+evenNumberSum(bottom+2,top);        
}
