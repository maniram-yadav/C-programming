#include<stdio.h>

int main(){
int a[3][3],i,j,temp=0;

  // Insert element of matrix
for(i=0;i<3;i++)
for(j=0;j<3;j++){
scanf("%d",&a[i][j]);
}


for(i=0;i<3;i++)
{
temp +=(i%2==0?1:-1)*a[i][0]*((i%2==0?1:-1)*a[(i+1)%3][1]*a[(i+2)%3][2]   +(i%2==0?-1:1)*a[(i+2)%3][1]*a[(i+1)%3][2]);
}
  
  // Determinant of the matrix
printf("Determinant Of Matrix : %d\n",temp);

return 0;

}
