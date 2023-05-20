#include <stdio.h>
#include <cs50.h>
int main(void){
  int num1=get_int("enter the first number : ");
    int num2 =get_int("enter the second number : ");
    char method=get_char("choose the method(A,S,M,D)  : ");
if(method=='A'||method=='a'){
        printf("%i\n" , num1+num2);
    }
    else if(method=='S'||method=='s'){
        printf("%i\n" , num1-num2);
    }
    else if(method=='M'||method=='m'){
        printf("%i\n" , num1*num2);
    }
    else if(method=='D'||method=='d'){
        printf(" %i\n" ,num1/num2);
    }

}
