#include<stdio.h>
//#include<conio.h>
int fibo(int a);
int main(){

fibo(4);
return 0;
}

int fibo(int num)
{
    int x=num;
    if (num == 0)
    {
        //printf("  %d",num);
        return 0;
    }
    else if (num == 1)
    {
        //printf("  %d",num);
        return 1;
    }
    else
    {
        printf("  %d",fibo(num - 1) );
        return(fibo(num - 1) + fibo(num - 2));
    }
    while(x--)
        fibo(x);
}
