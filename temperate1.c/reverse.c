#include<stdio.h>

int main(){
   
    int r,n,rev=0,f;
    printf("Enter no:");
    scanf("%d",&n);
    f=n;
    while(n>0){
      r=n%10;
      rev= (rev*10)+r;
      n=n/10;
    }
    printf("reverse no is %d",rev);

    if (f==rev){
        printf("\n it is palindom");
    }else{
        printf("\n it is not palindom");
        
    }
    


        return 0;
}