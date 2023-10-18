// square of a number
#include <stdio.h>
main() 
{
   int a, b;
   
   printf("Enter a number: ");
   scanf("%d",&a);
   
   b = a*a;
   
   printf("Square of %d is %d", a, b); 
} 

// square of number using for loop
#include <stdio.h>
main() 
{
  int n, i, j;
  printf("Input the value: ");
  scanf("%d", &n);
  
  for (i = 1; i <= n; ++i)
  {
    j = i*i;  
    printf("\nsquare of %d is %d\n ", i, j);
  }
}

// square of number using while loop
#include <stdio.h>
main() 
{
  int n, j;
  int i = 1;
  printf("Input the value: ");
  scanf("%d", &n);
  
  while (i<=n)
  {
    j = i*i;  
    printf("\nsquare of %d is %d\n ", i, j);
    ++i;
  }
}