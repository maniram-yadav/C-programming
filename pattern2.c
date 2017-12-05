
#include<stdio.h>

int main(){
int i,j,n,temp;
for(i=0;i<6;i++)
{
    temp=i;
    for(j=0;j<12;j++)
    {
    if(j<6-i||j>6+i)
     printf("  ");
     else
     {
        printf("%d ",(j<6)?temp--:temp++);
     }
    }
    printf("\n");
    }


return 0;
}
