#include<stdio.h>
int main(){
int n,a=0,b=1,sum=0;
printf("Enter number of terms :");
scanf("%d",&n);  // Numver of terms
while(n--)
{
    sum=0;
    printf(" %d",a);
    sum= a+b;
    a=b;
    b=sum;
    }

return 0;

}
