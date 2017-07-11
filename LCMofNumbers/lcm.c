#include<stdio.h>
int main(){

int n,a[100],i=0,temp=-999,j=0;

// Enter number of elements
scanf("%d",&n);

//Enter n elemnts
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
temp=(temp<a[i])?a[i]:temp;          // finding the greatest value.
}

i=1;

while(i){
    j=0;
   while((temp*i)%a[j]==0&&j++<n);                // Checking of divisivility of greatest number by all the numbers.
                                                  //  If number is divided by every number then value is lcm.
                                                  
  if(j==n)
{  temp=temp*i;
  break; }

i++;}

printf("%d",temp);
}
