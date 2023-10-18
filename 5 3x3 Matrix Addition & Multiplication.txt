//5 3x3 Matrix Addition & Multiplication
#include<stdio.h>
#include<conio.h>

int main()
{
 int i,j,k, a[3][3], b[3][3], add[3][3], mul[3][3];

 printf("Enter elements of first matrix:\n");
 for(i=0;i< 3;i++)
 {
  for(j=0;j< 3;j++)
  {
   printf("a[%d][%d]=",i,j);
   scanf("%d", &a[i][j]);
  }
 }
 
 printf("Enter elements of second matrix:\n");
 for(i=0;i< 3;i++)
 {
  for(j=0;j< 3;j++)
  {
   printf("b[%d][%d]=",i,j);
   scanf("%d", &b[i][j]);
  }
 }

 for(i=0;i< 3;i++)
 {
  for(j=0;j< 3;j++)
  {
   add[i][j] = a[i][j]+b[i][j];
  }
 }
 for(i=0;i< 3;i++)
 {
  for(j=0;j< 3;j++)
  {
   mul[i][j] = 0;
   for(k=0;k< 3;k++)
   {
    mul[i][j] = mul[i][j] + a[i][k]*b[k][j];
   }
  }
 }
 
 printf("Added matrix is:\n");
 for(i=0;i< 3;i++)
 {
  for(j=0;j< 3;j++)
  {
   printf("%d\t", add[i][j]);
  }
  printf("\n");
 }

 printf("Multiplied matrix is:\n");
 for(i=0;i< 3;i++)
 {
  for(j=0;j< 3;j++)
  {
   printf("%d\t", mul[i][j]);
  }
  printf("\n");
 }
 return 0;
}