#include<stdio.h>
int main()
{ 
   int n,m,i,j,k;
  printf("enter the no of rows=");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  { 
     if(i==n||i==1)
     { 
        for(j=1;j<=n;j++)
        printf("*");
     }
     else if(i!=n||i!=1)
     { 
       for(j=n-1;j>=i;j--)
       printf(" ");
       for(k=i;k<=i;k++)
       printf("*");
     }
     printf("\n");
   }
 getch();
 return 0; 
}
