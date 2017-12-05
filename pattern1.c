#include<stdio.h>

int main(){
int i,j,n;
for(i=0;i<7;i++)
{
    for(j=0;j<4;j++)
    {
        if(i<3)
            printf((j<3-i)?"  ":" *");
        else
            printf((j<i-3)?"  ":" *");

    // printf((n/2-j&&i<n/2)?((j<)):());
    }
printf("\n");
}
return 0;
}
