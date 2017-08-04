#include<stdio.h>

/*                 @Author  Maniram Yadav     */
int main(){

int n;

printf("Size of Array :  ");
scanf("%d",&n);
int a[n+1],i;
int b[n+1];

for(i=1;i<=n;i++){
 b[i]=0;
}

printf("Elements of Array :  ");
for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
    b[a[i]]++;

}

printf("Frequency of elements : \n");

for(i=1;i<=n;i++){
    printf("  %d  ->  %d\n",i,b[i]);
}


}
