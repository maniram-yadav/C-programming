#include <stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int length=0,j=0,i;

    scanf("%s",str);   // Enter the String
    
    while(str[length++]!='\0') ;    // Gertting Length of String
    
    for( i=0;i<length-1;i++){
       
        if(str[i]>=65&&str[i]<=91)
        {
            str[i]=(str[i]+32);      // Changing String letter capital to snmall
        }
        else
        {
            str[i]=(str[i]-32);     // Changing String letter small to capital
        }
    }
    str[i]='\0';
    
    puts(str);       // Printing the String
    
    return 0;
}
