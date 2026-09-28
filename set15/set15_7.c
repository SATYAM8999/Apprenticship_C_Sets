void main()
{

    int n=5;
    for(int i=1;i<=n;i++)
    {
     for(int sp=1;sp<i;sp++)
      {
         printf(" ");
      }
      for(int j=n;j>=i;j--)
      {
            printf("%d",j);
      }
     printf("\n");
  }

}
