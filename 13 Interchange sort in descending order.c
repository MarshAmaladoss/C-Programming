//Interchange sort in descending order
#include<stdio.h>
#include<conio.h>

int main() 
{
    int a[5], i, j, temp;
    clrscr();
    printf("Enter array elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }    
    printf("Array Elements: ");
    for(i=0; i<5; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}