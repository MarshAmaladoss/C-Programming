// 8. Fibonacci series developing and finding the nth tem of Fibonacci series

#include <stdio.h>
int main() 
{
  int i, n;
  int t1 = 0, t2 = 1;
  int t3 = t1 + t2;
  
  printf("Enter the number of terms:");
  scanf("%d", &n);
  
    
  // print 1st to nth terms
  for (i = 0; i < n; ++i) 
  {
    printf("%d ", t1);
    t1 = t2;
    t2 = t3;
    t3 = t1 + t2;
  }
  return 0;
}
