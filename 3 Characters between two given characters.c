// 3. Characters between two given characters
#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main()
{
    char s[1000];  
    int i,j,count=-2;
    clrscr();
 
    printf("Enter  the string : ");
    gets(s);
    j=strlen(s);
    
    for(i=0;s[i];i++)  
    {
     count++;
    }
     
    printf("\ncharacters between two given characters %c and %c are %d",s[0],s[j-1],count);

    getch();
    return 0;
}