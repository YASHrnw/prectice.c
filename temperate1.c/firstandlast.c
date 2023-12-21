int main()
{
  int  n,first,last,p;

  printf("\n Enter number :");
  scanf("%d",&n);
  p=n;
  last=p%10;
  while (n>0)
  {
     first=n%10;
     n=n/10;
  }
  
  printf("\n first and last digits number %d",first,last);
  return 0;
}