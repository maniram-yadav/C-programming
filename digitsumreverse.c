#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int n,temp,x=0,sum=0;
    scanf("%d",&n);
    temp=n;
   while(temp){
       sum += temp%10;
       temp /= 10;
       }
       temp=sum;
    do
    {
      x=x*10+ temp%10;
    }while(temp/=10);
    printf("%s",(sum*x==n)?"YES":"NO");

return 0;
}
