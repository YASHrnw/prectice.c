#include<stdio.h>
int main()
{
    int arr[50],i,n,ins,upd,new_val;

    printf("enter size:");
    scanf("%d",&n);
    printf("\nenter elements:");
    for(i=0;i<n;++i)
     {
        scanf("%d",&arr[i]);
     }

     printf("enter new value for insert:");
     scanf("%d",&ins);

     arr[n]=ins;
     n++;
     printf("\n after insert entered elements:");
     for(i=0;i<=n;++i)
      {
        printf("%d",arr[i]);
      }

      arr[n-1]=0;
      n--;

      printf("\n afetr delets entered elements :");
      for(i=0;i<n;++i)
       {
         printf("%d ", arr[i]);
       }

       printf("\n enter value of upadet :");
       scanf("%d ",&upd);
       printf("\n enter new value for update :");
       scanf("%d ",&new_val);

       for(i=0;i<n;i++)
        {
            if(arr[i]==upd)
             {
              arr[i] = new_val;
             } 
        }
        printf("\nafter updating the array is : ");
        for(i=0;i<n;i++)
          {
           printf("%d ",arr[i]);
          }
}