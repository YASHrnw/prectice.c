#include<stdio.h>
int main(){
    int a[20][20],i,j,m,n,sum=0,s;
    printf("enter size of row and colume::");
    scanf("%d %d",&m,&n);

    printf("enter elements:");
    for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < n; j++)
       {
       scanf("%d",&a[i][j] );
       } 
    }
    printf("\n matrix \n");
    s=i-1;
     for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < n; j++)
       {
        if (i==j || i+j==s)
        {
            sum=sum+a[i][j];
        }
        
       printf(" %d",a[i][j]);
       
       } 
       printf("\n");
    }
     printf("\n cross-diagonal sum = %d",sum);
    
    return 0;
}