#include<stdio.h>

int factorial(int n){
return (n==1)?1:n*factorial(n-1);
}

int main(){
int num;
printf("Enter number for factorial : ");
scanf("%d",&num);
printf("%d! = %ld",num,factorial(num));
return 0;
}
