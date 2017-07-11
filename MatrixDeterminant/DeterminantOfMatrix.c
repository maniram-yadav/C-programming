#include<stdio.h>

int main(){
int a[3][3],i,j,determinant=0,temp=0;

for(i=0;i<3;i++)
for(j=0;j<3;j++){
scanf("%d",&a[i][j]);
}


for(i=0;i<3;i++)
{
temp +=(i%2==0?1:-1)*a[i][0]*((i%2==0?1:-1)*a[(i+1)%3][1]*a[(i+2)%3][2]   +(i%2==0?-1:1)*a[(i+2)%3][1]*a[(i+1)%3][2]);
printf("Det: %d",temp);
}
printf("Det: %d\n",temp);

return 0;

}
