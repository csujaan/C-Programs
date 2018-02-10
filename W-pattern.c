#include<stdio.h>
int main()
{ 
  int n,m,i,j,k;
  printf("enter the no of rows=");
  scanf("%d",&n);
  m=(n+1)/2;
  
  if(n%2==0)
   m=m+1;
  for(i=1;i<=n;i++)
  {
    if(i<m)
    { 
      for(j=1;j<=n;j++)
      { 
        if(j==1||j==n)
          printf("*");
        else
          printf(" ");
      }
     }
     else
    { 
      for(j=1;j<=n;j++)
      { 
        if(j==1||j==i||j==n||j==(n-i)+1)
          printf("*");
        else
          printf(" ");
      }
    }
  
    printf("\n");
  }
 return 0;
}
